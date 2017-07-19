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
	LoadFile file(FILE_PATH + "load_files.txt");
	std::string path;
	std::string tile_name;
	while (true){
		path = file.next();
		if (path.empty()) break;
		LoadFile temp(FILE_PATH + path);
		Type tile_temp = temp.parse_into_type();
		tile_name = tile_temp.get_name();
		tile_types.insert(std::pair<std::string, Type>(tile_name, tile_temp));
	}
	
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
	village.set_id(2);
	game_map[0][0] = village;
	village.set_id(1);
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
	
	if (count > 10) std::cout<<"  ";
	else std::cout<<" ";
	for (int k = 0; k < sizeof(game_map)/sizeof(game_map[0]); k++){
		if (k < 10) std::cout<<"| "<<k;
		else std::cout<<"|"<<k;
	}
		std::cout<<"|\n";
};

void clean_up(){
	delete me;
	delete you;
}

int main(){
	setup();
	bool quit = false;
	while (!quit){
		//Field field;
		//Farm farm(1);
		//clear_console();
		draw_map();
	
		
		
		quit = true;
	}
	clean_up();
	return 0;
}
