//
//  Type_Classes.cpp
//  kingdom_building_games
//
//  Created by Bradley Black on 5/25/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#include <iostream>

#include "Type_Classes.hpp"

/*////////////////////////////////////////////
 // Functions from the Type base class
 // That all the tile type classes are inherited
 // from.
 */
Type::Type(){
	//std::cout<<"Type constructor!!!"<<std::endl;
}

Type::~Type(){
}

void Type::add_army(std::vector<Unit> *army){
	this->army.insert(this->army.end(), army->begin(), army->end());
}

void Type::print_tile_info(){
	
}

std::string Type::get_representation(){
	return representation;
}

int Type::get_owner(){
	return player_id;
}

//Setters for Type
void Type::set_population(int population_size){
	this->population_size = population_size;
}

void Type::set_population_growth(int population_growth){
	this->population_growth = population_growth;
}

void Type::set_tax(int tax){
	this->tax = tax;
}

//Functions for the field

Field::Field(){
	has_owner = false;
	player_id = 0;
	type = FIELD;
	representation = std::to_string(player_id) + "f";
}

Field::~Field(){
}

Farm::Farm(int player_id){
	has_owner = true;
	this->player_id = player_id;
	type=S_FARM;
	representation = std::to_string(player_id) + "F";
}

Farm::~Farm(){
	
}

Village::Village(int player_id){
	has_owner = true;
	this->player_id = player_id;
	type = S_VILLAGE;
	representation = std::to_string(player_id) + "V";
}

Village::~Village(){
	
}
