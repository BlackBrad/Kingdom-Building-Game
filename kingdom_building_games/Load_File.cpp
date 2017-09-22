//
//  Load_File.cpp
//  kingdom_building_games
//
//  Created by Bradley Black on 7/5/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#include "Load_File.hpp"

LoadFile::LoadFile(){
	is_loaded = false;
}

LoadFile::~LoadFile(){
	if (input_file.is_open())input_file.close();
}

LoadFile::LoadFile(std::string file_path){
	input_file.open(file_path);
	if (!input_file.is_open()){
		std::cout<<"Cannot open file: "<<file_path<<std::endl;
		return;
	}else{
		std::string temp;
		while (!input_file.eof()){
			getline(input_file, temp);
			while (temp[0] == '#' || temp[0] == ' ' || temp == "\n"){
				getline(input_file, temp);
			}
			file_data.push_back(temp);
			
		}
	}
}

std::string LoadFile::next(){
	std::string return_value = "Error!";
	static int index = 0;
	if (index == file_data.size()) return "";
	return_value = file_data[index];
	index++;
	return return_value;
}

bool LoadFile::check_is_open(){
	if (!input_file){
		std::cout<<"File is not open!"<<std::endl;
		return false;
	}else return true;
}

Type LoadFile::parse_into_type(){
	Type *temp = new Type();
	
	for (int i = 0; i < file_data.size(); i++){
		unsigned long index = file_data[i].find('=');//The index where the name and value are split.
		std::string name = file_data[i].substr(0, index);
		file_data[i].erase(0, index + 1);
		std::string value = file_data[i].substr(0);
		
		if (name == "type") temp->set_name(value);
		else if(name == "player_id") temp->set_id(std::stoi(value));
		else if(name == "representation") temp->set_representation(value);
		else if(name == "income") temp->set_income(std::stoi(value));
		else if(name == "upkeep") temp->set_upkeep(std::stoi(value));
		else if(name == "population_size"){
			temp->set_poulation_size(std::stoi(value));
			std::cout<<"pop: "<<value<<std::endl;
		}
		else if(name == "population_growth") temp->set_population_growth(std::stoi(value));
		else if(name == "tax") temp->set_tax(std::stoi(value));
		else if(name == "trading_hub"){
			if (value == "true") temp->set_trading_hub(true);
			else temp->set_trading_hub(false);
		}
		else if (name == "extreme_population") temp->set_extreme_population(std::stol(value));
		else if (name == "low_population") temp->set_low_population(std::stol(value));
		else if (name == "extreme_growth") temp->set_extreme_growth(std::stol(value));
		else if (name == "defense") temp->set_defense(std::stoi(value));
		else if (name == "cost") temp->set_cost(stoi(value));
		else if (name == "requirement") temp->set_requirement(value);
	}
	
	return *temp;
}
