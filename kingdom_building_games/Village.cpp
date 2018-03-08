//
//  Village.cpp
//  kingdom_building_game
//
//  Created by Bradley Black on 22/09/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#include "Village.hpp"

Village::Village(){
	Type::Type();
}

void Village::print_tile_info(int player_id){
	Type::print_tile_info(player_id); //Call print_tile_info from the base class Type
	
	std::cout<<"Population: "<<population_size<<std::endl;
	if (player_id == this->player_id){
		std::cout<<"Population Growth: "<<population_growth<<std::endl;
		printf("(Printf) Population Growth: %d per turn", population_growth);
		std::cout<<"Income: $"<<income<<std::endl;
		std::cout<<"Upkeep: $"<<upkeep<<std::endl;
		std::cout<<"Tax: $"<<tax<<std::endl;
		
	}
}
