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
private:
	bool has_trading_hub;
	
public:
	void set_trading_hub(bool has_trading_hub);
};

#endif /* Village_hpp */
