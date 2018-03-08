//
//  Type_Classes.cpp
//  kingdom_building_games
//
//  Created by Bradley Black on 5/25/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#include "Type.hpp"

Type::Type(){
	player_id = 0;
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

void Type::set_cost(int cost){
	this->cost = cost;
}

void Type::set_requirement(std::string requirement){
	this->requirement = requirement;
}

void Type::set_income(int income){
	this->income = income;
}

void Type::set_tax(int tax){
	this->tax = tax;
}

void Type::set_upkeep(int upkeep){
	this->upkeep = upkeep;
}

void Type::set_population(int population){
	this->population = population;
}

void Type::set_popGrowth(int pop_growth){
	this->pop_growth = pop_growth;
}

void Type::set_extremePop(int extreme_population){
	this->extreme_population = extreme_population;
}

void Type::set_defense(int defense){
	this->defense = defense;
}

void Type::set_tradingHub(bool trading_hub){
	this->trading_hub = trading_hub;
}

//Getters
std::string Type::get_name(){
	return name;
}

std::string Type::get_representation(){
	return std::to_string(player_id) + representation;
}


void Type::print_tile_info(Player current){
	std::string owner;
	if (current == ONE) owner = "One";
	else if (current == TWO) owner = "Two";
	else owner = "No Owner";
	std::cout<<"Tile Info\n*********\n"<<name<<"\n"<<"Owner: "<<owner<<std::endl;
}


