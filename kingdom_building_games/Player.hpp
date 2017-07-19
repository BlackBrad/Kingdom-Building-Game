//
//  Player.hpp
//  kingdom_building_games
//
//  Created by Bradley Black on 5/26/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <iostream>


class Player{
private:
	int id;
public:
	Player();
	Player(int player_id);
	
	~Player();
	static int new_id();
};

#endif /* Player_hpp */
