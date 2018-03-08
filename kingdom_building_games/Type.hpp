//
//  Type_Classes.hpp
//  kingdom_building_games
//
//  Created by Bradley Black on 5/25/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#ifndef Type_Classes_hpp
#define Type_Classes_hpp

#include <vector>
#include <iostream>

#include "Army_Units.hpp"
#include "Player.hpp"

/*/////////////////////////////////////////////////
// Class Type
// This class is used as a base class for the 
// tile type. It contains all commond variables
// and funtions. This is the data type that is
// loaded into the multi-dimesional array that 
// the game map is stored in.
*/
class Type{
protected:
	std::string name;
	int player_id;//Id of the player that owns the tile
	std::string representation; //Visual representation of the tile in the console
	//Other tiles will need an upkeep!
	std::vector<Unit> army; //Vector to store an army on the tile
	std::string requirement;
	int cost, income, tax, upkeep;
	int population, pop_growth, extreme_population;
	int defense;
	bool trading_hub;
	
public:
	Type();
	~Type();
	void add_army(std::vector<Unit> *army);
	void print_tile_info(Player current);
	int get_owner();
	
	//Getters
	std::string get_representation();
	std::vector<Unit> get_army();
	
	//Setters
	void set_name(std::string name);
	void set_id(unsigned int id);
	void set_representation(std::string representation);
	void set_cost(int cost);
	void set_requirement(std::string requirement);
	void set_income(int income);
	void set_tax(int tax);
	void set_upkeep(int upkeep);
	void set_population(int population);
	void set_popGrowth(int pop_growth);
	void set_extremePop(int extreme_population);
	void set_tradingHub(bool trading_hub);
	void set_defense(int defense);
	
	//Getters
	std::string get_name();
};

#endif /* Type_Classes_hpp */
