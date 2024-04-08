# This makefile is used as follows to regenerate files for the sinewave program:
#   make race.o   	--  Regenerates race.o by compiling
#   make animal.o   --  Regenerates animal.o by compiling
#   make theRace    --  Regenerates the executable sinewave file by compiling
#   make            --  Same as "make theRace"
#

theRace: animals.o race.o
	gcc -g -Wall race.o animals.o -lm -o theRace

animals.o: animals.h animals.c
	gcc -g -Wall -c animals.c

race.o: animals.h race.c
	gcc -g -Wall -c race.c

clean:
	rm -f .o race.o animals.o theRace

all: theRace

