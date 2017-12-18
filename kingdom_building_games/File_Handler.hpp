//
//  Load_File.hpp
//  kingdom_building_games
//
//  Created by Bradley Black on 7/5/17.
//  Copyright © 2017 Bradley Black. All rights reserved.
//

#ifndef Load_File_hpp
#define Load_File_hpp

#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include "Type.hpp"

/*
//
// This need to be re-written!!!
//
*/

class File_Handler{
private:
public:
	File_Handler();//Empty Constructor
	File_Handler(std::string file_path);//Constructor with parameters
	~File_Handler();
	
	static std::map<std::string, Type> LoadDataToMap(std::string load_file);
	Type parseToType(std::string data);
};

#endif /* Load_File_hpp */
