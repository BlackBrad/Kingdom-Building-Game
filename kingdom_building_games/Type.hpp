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

#include "Army_Units.hpp"

/*/////////////////////////////////////////////////
// Class Type
// This class is used as a base class for the 
// tile type. It contains all commond variables
// and funtions. This is the data type that is
// loaded into the multi-dimesional array that 
// the game map is stored in.
*/
class Type{
private:
	std::string name;
	int player_id;//Id of the player that owns the tile
	std::string representation; //Visiual representation of the tile in the console
	int income, upkeep, tax, population_growth ;
	bool has_trading_hub;
	std::vector<Unit> army; //Vector to store an army on the tile
	long population_size;
	long EXTREME_POPULATION, LOW_POPULATION, EXTREME_GROWTH;
	unsigned int defense;
	std::string requirement;
	int cost;
	
public:
	Type();
	~Type();
	void add_army(std::vector<Unit> *army);
	void print_tile_info();
	int get_owner();
	
	//Getters
	std::string get_representation();
	std::vector<Unit> get_army();
	
	//Setters
	void set_name(std::string name);
	void set_id(unsigned int id);
	void set_representation(std::string representation);
	void set_income(int income);
	void set_upkeep(int upkeep);
	void set_poulation_size(long population_size);
	void set_tax(int tax);
	void set_population_growth(int population_growth);
	void set_trading_hub(bool has_trading_hub);
	void set_extreme_population(long extreme_population);
	void set_low_population(long low_population);
	void set_extreme_growth(long extreme_grwoth);
	void set_defense(int defense);
	void set_cost(int cost);
	void set_requirement(std::string requirement);
	
	//Getters
	std::string get_name();
};

#endif /* Type_Classes_hpp */
