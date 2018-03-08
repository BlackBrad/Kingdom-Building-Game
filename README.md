# Kingdom-Building-Game
Currently untitled so I'm just rolling with 'kingdom building game' at the moment. 

If you want to run this (even though it does not much at the moment) then you need to place the game_data folder to wherever you place the executable otherwise the data won't be loaded into the game and it might crash (I don't know).

To compile under g++: g++ -std=c++11 main.cpp Load_File.cpp Army_Units.cpp Player.cpp Type.cpp Farm.cpp Field.cpp Village.cpp
I have now included a makefile so all you need to do is cd into the directory with all the source files and type make. It'll make an execuatble named kingdom. 

Currently supported commands:

exit

quit

view x,y       - Will display info about the square located at x,y on the game board.

view is currently not fully implemented, it does not display all the info about the square at the moment.
