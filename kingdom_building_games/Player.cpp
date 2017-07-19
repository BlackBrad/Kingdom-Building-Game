//
//  Player.cpp
//  kingdom_building_games
//
//  Created by Bradley Black on 5/26/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#include "Player.hpp"

Player::Player(){
}

Player::Player(int player_id){
	id = player_id;
}

Player::~Player(){
	std::cout<<"ID: "<<id<<std::endl;
}
