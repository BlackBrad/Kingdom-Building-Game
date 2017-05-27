//
//  Game.h
//  kingdom_building_games
//
//  Created by Bradley Black on 5/26/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#ifndef Game_h
#define Game_h

#include "Type_Classes.hpp"
#include "Army_Units.hpp"
#include "Player.hpp"

Type game_map[20][20];

enum Players{
	NONE = 0,
	ONE = 1,
	TWO = 2,
	AI = 9
};

Player *me = new Player(ONE);
Player *you = new Player(TWO);

#endif /* Game_h */
