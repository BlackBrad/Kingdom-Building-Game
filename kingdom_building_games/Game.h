//
//  Game.h
//  kingdom_building_games
//
//  Created by Bradley Black on 5/26/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include <map>
#include "Type.hpp"
#include "Army_Units.hpp"
#include "Player.hpp"
#include "Load_File.hpp"

const std::string FILE_PATH = "game_data/";

Type game_map[10][10];
std::map<std::string, Type> tile_types;

enum Players{
	NONE = 0,
	ONE = 1,
	TWO = 2,
	AI = 9
};



Player *me = new Player(ONE);
Player *you = new Player(TWO);

Player *current = me;

#endif /* Game_h */
