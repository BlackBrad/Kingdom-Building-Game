//
//  Load_File.cpp
//  kingdom_building_games
//
//  Created by Bradley Black on 7/5/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#include "File_Handler.hpp"

/*
 //
 // This need to be re-written!!!
 //
 */

/*/////////////////////////
// LoadDataToMap
//
//
*/
std::map<std::string, Type> File_Handler::LoadDataToMap(std::string load_file){
	std::map<std::string, Type> loaded_data;
	
	std::ifstream files_to_load;
	files_to_load.open(load_file);
	
	if (!files_to_load.is_open()){
		std::cout<<"Could not find the file: " << load_file;
		exit(-1);
	}
	
	while (!files_to_load.eof()){
		std::string file_name;
		files_to_load>>file_name;
		
		std::ifstream data_file;
		data_file.open("game_data/" + file_name);
		
		if(!data_file.is_open()){
			std::cout<<"Could not open file: " << file_name;
		}
		
		Type *temp = new Type();
		while(!data_file.eof()){
			
			std::string value_from_file;
			data_file>>value_from_file;
			
			int index = value_from_file.find('=');
			std::string variable = value_from_file.substr(0, index);
			std::string value = value_from_file.substr(index + 1, value_from_file.length());
			
			if (variable == "type"){
				temp->set_name(value);
			}else if(variable == "player_id"){
				temp->set_id(std::stoi(value));
			}
			else if(variable == "representation"){
				temp->set_representation(value);
			}
			else if(variable == "income"){
				temp->set_income(std::stoi(value));
			}
			else if(variable == "upkeep"){
				temp->set_id(std::stoi(value));
			}
			else if(variable == "population_size"){
				temp->set_population(std::stoi(value));
			}
			else if(variable == "population_growth"){
				temp->set_popGrowth(std::stoi(value));
			}
			else if(variable == "tax"){
				temp->set_tax(std::stoi(value));
			}
			else if(variable == "trading_hub"){
				if (value == "true"){
					temp->set_tradingHub(true);
				}else if (value == "false"){
					temp->set_tradingHub(false);
				}else{
					std::cout<<"Error reading file!\nIs trading_hub true or false?\nGiven value: " <<value;
					exit(-1);
				}
			}
			else if(variable == "extreme_population"){
				temp->set_extremePop(std::stoi(value));
			}
			else if(variable == "low_population"){
				temp->set_id(std::stoi(value));
			}
			else if(variable == "defense"){
				temp->set_defense(std::stoi(value));
			}
			else if(variable == "cost"){
				temp->set_cost(std::stoi(value));
			}
			else if(variable == "requirement"){
				temp->set_requirement(value);
			}
			
		/*
		 
		 type=Village
		 player_id=0
		 representation=V
		 income=10
		 upkeep=2
		 population_size=10
		 population_growth=0
		 tax=0
		 trading_hub=false
		 extreme_population=100
		 low_population=0
		 extreme_growth=20
		 defense=0
		 cost=1500
		 requirement=field
		 
		 */
			
		}
		std::pair<std::string, Type> new_data (temp->get_name(), *temp);
		loaded_data.insert(new_data);
		delete temp;
	}
	
	return loaded_data;
}

Type File_Handler::parseToType(std::string data){
	Type *temp = new Type();
	
	
	
	return *temp;
}
