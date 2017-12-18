//
//  main.cpp
//  kingdom_building_games
//
//  Created by Bradley Black on 5/25/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#include <iostream>
#include <vector>

#include "Game.h"


void setup(){
	tile_types = File_Handler::LoadDataToMap(FILE_PATH + "load_files.txt");
	
	//Initialize the game map by setting all the tiles to an empty field with
	//no owner
	for (int i = 0; i < sizeof(game_map) / sizeof(game_map[0]); i++){
		for (int j = 0; j < sizeof(game_map[0]) / sizeof(game_map[0][0]); j++){
			Type field = tile_types.at("Field");
			game_map[i][j] = field;
		}
	}
	
	//Place the two players starting villages on the game map
	Type village = tile_types.at("Village");
	village.set_id(TWO);
	game_map[0][0] = village;
	village.set_id(ONE);
	game_map[9][9] = village;
}

void clear_console(){
	std::cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n";
}

void draw_map(){
	int count = 0;
	for (int i = 0; i < sizeof(game_map) / sizeof(game_map[0]); i++){
		if (count < 10) std::cout<<" " << count;
		else std::cout<<count;
		for (int j = 0; j < sizeof(game_map[0]) / sizeof(game_map[0][0]); j++){
			std::cout<<"|"<<game_map[i][j].get_representation();
		}
		std::cout<<"|\n";
		count++;
	}

	int size_of_border = (sizeof(game_map) / sizeof(game_map[0]));
	int border_count = 0;
	if (count > 10) std::cout<<"  +";
	else std::cout<<" +";
	while (border_count < size_of_border){
		std::cout<<"--+";
		border_count++;
	}
	std::cout<<"\n";
};

Type get_tile(std::string coordinates){
	int x, y, index;
	index = coordinates.find(',');
	x = std::stoi(coordinates.substr(0, index));
	y = std::stoi(coordinates.substr(index + 1, -1));
	return game_map[x][y];
}

void view_tile(std::string coordinates){
	get_tile(coordinates).print_tile_info();
	std::printf("Press [RETURN] to continue: ");
	std::cin.ignore();
}

int get_option(){
	std::string option;
	std::cout<<"What would you like to do?"<<std::endl;
	std::printf("?");
	getline(std::cin, option);
	for (auto & c: option){
		c = std::toupper(c);
	}
	
	if (option == "QUIT" || option == "EXIT") return -1;
	else{
		std::string temp;
		int index = option.find(' ');
		temp = option.substr(0, index);
		if (temp == "VIEW") view_tile(option.substr(index + 1, -1));
	}
	std::cout<<"The option entered was: "<<option<<std::endl;
	return 0;
}

void clean_up(){
	delete me;
	delete you;
}

int main(){
	setup();
	bool quit = false;
	while (!quit){

		//clear_console();
		draw_map();
		if (get_option() == -1) quit = true;
	}
	clean_up();
	return 0;
}
