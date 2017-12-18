OBJS = main.o File_Handler.o Army_Units.o Player.o Type.o Field.o Village.o
CC = g++ -std=c++11
FLAGS =-c

kingdom: $(OBJS)
	$(CC) $(OBJS) -o kingdom

main.o: main.cpp Game.h
	$(CC) $(FLAGS) main.cpp

File_Handler: File_Handler.cpp File_Handler.hpp
	$(CC) $(FLAGS) File_Handler.cpp

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

City.o: City.cpp City.hpp
	$(CC) $(FLAGS) City.cpp

Castle.o: Castle.cpp Castle.hpp
	$(CC) $(FLASGS) Castle.cpp

Farm.o: Farm.cpp Farm.hpp
	$(CC) $(FLASGS) Farm.cpp

clean:
	rm *.o; rm kingdom
