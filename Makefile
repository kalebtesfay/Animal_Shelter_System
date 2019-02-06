OPT = -Wall

as:	main.o View.o Control.o Shelter.o Animal.o AnimalList.h
	g++ $(OPT) -o as main.o View.o Control.o Shelter.o Animal.o AnimalList.h

main.o:	main.cpp
	g++ $(OPT) -c main.cpp

View.o:	View.cpp View.h
	g++ $(OPT) -c View.cpp

Control.o:	Control.cpp Control.h
	g++ $(OPT) -c Control.cpp

Shelter.o:	Shelter.cpp Shelter.h
	g++ $(OPT) -c Shelter.cpp

Animal.o:	Animal.cpp Animal.h
	g++ $(OPT) -c Animal.cpp

clean:
	rm -f *.o as
