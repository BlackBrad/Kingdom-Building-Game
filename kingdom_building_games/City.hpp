//
//  City.hpp
//  kingdom_building_game
//
//  Created by Bradley Black on 5/10/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#ifndef City_hpp
#define City_hpp


class City{
private:
	bool has_trading_hub;
	unsigned int defense;
	
public:
	void set_trading_hub(bool has_trading_hub);
};

#endif /* City_hpp */
