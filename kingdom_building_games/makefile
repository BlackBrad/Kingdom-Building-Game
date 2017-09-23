OBJS = main.o Load_File.o Army_Units.o Player.o Type.o Field.o Village.o
CC = g++ -std=c++11
FLAGS =-c

kingdom: $(OBJS)
	$(CC) $(OBJS) -o kingdom

main.o: main.cpp Game.h
	$(CC) $(FLAGS) main.cpp

Load_File.o: Load_File.cpp Load_File.hpp
	$(CC) $(FLAGS) Load_File.cpp

Army_Units.o: Army_Units.cpp Army_Units.hpp
	$(CC) $(FLAGS) Army_Units.cpp

Player.o: Player.cpp Player.hpp
	$(CC) $(FLAGS) Player.cpp

Type.o: Type.cpp Type.hpp
	$(CC) $(FLAGS) Type.cpp

Field.o: Field.cpp Field.hpp
	$(CC) $(FLAGS) Field.cpp

Village.o: Village.cpp Village.hpp
	$(CC) $(FLAGS) Village.cpp

clean:
	rm *.o Tile_Types/*.o kingdom
