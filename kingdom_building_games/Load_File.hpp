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

class LoadFile{
private:
	std::ifstream input_file;
	
	std::map<std::string, Type> type_data;
	std::vector<std::string> file_data;
	
	bool is_loaded;
	bool check_is_open();
	
public:
	LoadFile();//Empty Constructor
	LoadFile(std::string file_path);//Constructor with parameters
	std::string next();
	void load_type();
	//Type get_loaded_type();
	Type parse_into_type();
	
	~LoadFile();
};

#endif /* Load_File_hpp */
