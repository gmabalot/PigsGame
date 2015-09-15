main: main.o Dice.o Player.o gameFunc.o
	g++ -o main main.o dice.o player.o gameFunc.o

main.o: main.cpp Dice.h gameFunc.h Player.h
	g++ -c main.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

Dice.o: Dice.cpp
	g++ -c Dice.cpp

gameFunc.o: gameFunc.cpp
	g++ -c gameFunc.cpp

clean:
	rm *.o
