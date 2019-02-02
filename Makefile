OPT = -Wall

as:	main.o View.o Control.o
	g++ $(OPT) -o as main.o View.o Control.o

main.o:	main.cpp
	g++ $(OPT) -c main.cpp

View.o:	View.cpp View.h
	g++ $(OPT) -c View.cpp

Control.o:	Control.cpp Control.h
	g++ $(OPT) -c Control.cpp

clean:
	rm -f *.o as
