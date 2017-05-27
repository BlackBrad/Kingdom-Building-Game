//
//  Army_Units.hpp
//  kingdom_building_games
//
//  Created by Bradley Black on 5/26/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#ifndef Army_Units_hpp
#define Army_Units_hpp

#include <iostream>

class Unit{
private:
public:
	Unit();
	~Unit();
};

class Soldier: public Unit{
private:
	std::string name = "Bill";
	
public:
	Soldier();
	~Soldier();
};

class Knight: public Unit{
private:
public:
	Knight();
	~Knight();
};

#endif /* Army_Units_hpp */
