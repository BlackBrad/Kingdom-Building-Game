//
//  Type_Classes.cpp
//  kingdom_building_games
//
//  Created by Bradley Black on 5/25/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#include <iostream>

#include "Type.hpp"

Type::Type(){
	//std::cout<<"Type constructor!!!"<<std::endl;
}

Type::~Type(){
}

void Type::add_army(std::vector<Unit> *army){
	this->army.insert(this->army.end(), army->begin(), army->end());
}

//Setters
void Type::set_name(std::string name){
	this->name = name;
}

void Type::set_id(unsigned int id){
	this->player_id = id;
}
void Type::set_representation(std::string representation){
	this->representation = representation;
}

void Type::set_income(int income){
	this->income = income;
}

void Type::set_upkeep(int upkeep){
	this->upkeep = upkeep;
}

void Type::set_poulation_size(long population_size){
	this->population_size = population_size;
}

void Type::set_tax(int tax){
	this->tax = tax;
}

void Type::set_population_growth(int population_growth){
	this->population_growth = population_growth;
}

void Type::set_trading_hub(bool has_trading_hub){
	this->has_trading_hub = has_trading_hub;
}

void Type::set_extreme_population(long extreme_population){
	this->EXTREME_POPULATION = extreme_population;
}

void Type::set_low_population(long low_population){
	this->LOW_POPULATION = low_population;
}

void Type::set_extreme_growth(long extreme_grwoth){
	this->EXTREME_GROWTH = extreme_grwoth;
}

void Type::set_defense(int defense){
	this->defense = defense;
}

void Type::set_cost(int cost){
	this->cost = cost;
}

void Type::set_requirement(std::string requirement){
	this->requirement = requirement;
}

//Getters
std::string Type::get_name(){
	return name;
}

std::string Type::get_representation(){
	return std::to_string(player_id) + representation;
}

/*
void Type::print_tile_info(){
	
}
*/

