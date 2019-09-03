#Object files shouldn't be on the repository. 
#They must be compilated on time
.PHONY: all

CC=g++
SRC=./../src/
OBJS=./objs/
BIN=./

#all: setup shouldn't be done in a explicit build


all: Main.o And2.o Or2.o Not.o	
	$(CC) -o $(BIN)3S.out $(OBJS)Main.o $(OBJS)And2.o $(OBJS)Or2.o $(OBJS)Not.o

setup: 
	mkdir $(OBJS)
	
And2.o:
	$(CC) -c $(SRC)And2.cpp
	mv And2.o $(OBJS)

Or2.o:
	$(CC) -c $(SRC)Or2.cpp
	mv Or2.o $(OBJS)

Not.o:
	$(CC) -c $(SRC)Not.cpp
	mv Not.o $(OBJS)

Main.o:
	$(CC) -c $(SRC)Main.cpp
	mv Main.o $(OBJS)			
	
clean_all:	
	if [ -d "$(OBJS)" ]; then rm -r $(OBJS); fi
	rm *.out
clean:	
	rm $(OBJS)*.o
	rm *.out



	
