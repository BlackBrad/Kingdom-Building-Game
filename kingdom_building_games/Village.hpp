//
//  Village.hpp
//  kingdom_building_game
//
//  Created by Bradley Black on 22/09/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#ifndef Village_hpp
#define Village_hpp

#include "Type.hpp"

class Village : public Type{
protected:
	long population_size;
	long EXTREME_POPULATION, LOW_POPULATION, EXTREME_GROWTH;
	int income, upkeep, tax, population_growth;
	
public:
	Village();
	~Village();
	
	void print_tile_info(int player_id);
	void calculate_population();
	void calculate_income();
	
	//Setters
	void setTax(int tax){
		this->tax = tax;
	}
};

#endif /* Village_hpp */
