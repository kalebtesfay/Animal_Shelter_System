OPT = -Wall

as:	main.o View.o Control.o
	g++ $(OPT) -o as main.o View.o Control.o

main.o:	main.cc
	g++ $(OPT) -c main.cc

View.o:	View.cc View.h
	g++ $(OPT) -c View.cc

Control.o:	Control.cc Control.h
	g++ $(OPT) -c Control.cc

clean:
	rm -f *.o as
