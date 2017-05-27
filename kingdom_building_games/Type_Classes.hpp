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

#include "tileTypeEnum.h"
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
protected:
	bool has_owner;
	int player_id;//Id of the player that owns the tile
	std::string representation; //Visiual representation of the tile in the console
	int income = 0, upkeep = 0, population_size = 0, tax = 0, population_growth = 0;
	bool has_trading_hub = false;
	std::vector<Unit> army; //Vector to store an army on the tile
	enum tile_type type;
	long EXTREME_POPULATION, LOW_POPULATION, EXTREME_GROWTH; 
	
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
	void set_population(int population_size);
	void set_population_growth(int population_growth);
	void set_tax(int tax);
};

class Field: public Type{
private:
public:
	Field();
	~Field();
};

// Inherited classes

class Farm: public Type{
private:
	
public:
	Farm(int player_id);
	~Farm();
};



class Village: public Type{
private:
	
public:
	Village(int player_id);
	~Village();
};

class City: public Type{
private:
	
public:
	City(int player_id);
	~City();
};



class Fort: public Type{
private:
	
public:
	Fort(int player_id);
	~Fort();
};



class Castle: public Type{
private:
	
public:
	Castle(int player_id);
	~Castle();
};


#endif /* Type_Classes_hpp */
