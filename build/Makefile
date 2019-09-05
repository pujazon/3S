#Object files shouldn't be on the repository. 
#They must be compilated on time
.PHONY: all

CC=g++
STEST=./../test/
SRC=./../src/
OBJS=./objs/
BIN=./

#TODO: setup shouldn't be done in a explicit build

all: Main.o And2.o Or2.o Not.o Mux2_1.o	FullAdder.o Add16.o
	$(CC) -o $(BIN)3S.out $(OBJS)Main.o $(OBJS)And2.o $(OBJS)Or2.o $(OBJS)Not.o $(OBJS)Mux2_1.o $(OBJS)FullAdder.o $(OBJS)Add16.o

setup: 
	mkdir $(OBJS)

lgatesTL: And2.o Or2.o Not.o Mux2_1.o
	$(CC) -c $(STEST)lgatesTL.cpp 
	$(CC) -o $(BIN)lgatesTL.out $(BIN)lgatesTL.o $(OBJS)And2.o $(OBJS)Or2.o $(OBJS)Not.o $(OBJS)Mux2_1.o
	rm $(BIN)lgatesTL.o

arithmeticTL: FullAdder.o Add16.o 
	$(CC) -c $(STEST)arithmeticTL.cpp 
	$(CC) -o $(BIN)arithmeticTL.out $(BIN)arithmeticTL.o $(OBJS)FullAdder.o $(OBJS)Add16.o
	rm $(BIN)arithmeticTL.o
	
And2.o:
	$(CC) -c $(SRC)And2.cpp
	mv And2.o $(OBJS)

Or2.o:
	$(CC) -c $(SRC)Or2.cpp
	mv Or2.o $(OBJS)

Not.o:
	$(CC) -c $(SRC)Not.cpp
	mv Not.o $(OBJS)

Mux2_1.o:
	$(CC) -c $(SRC)Mux2_1.cpp
	mv Mux2_1.o $(OBJS)

Main.o:
	$(CC) -c $(SRC)Main.cpp
	mv Main.o $(OBJS)

FullAdder.o:
	$(CC) -c $(SRC)FullAdder.cpp
	mv FullAdder.o $(OBJS)

Add16.o:
	$(CC) -c $(SRC)Add16.cpp
	mv Add16.o $(OBJS)			
	
clean_all:	
	if [ -d "$(OBJS)" ]; then rm -r $(OBJS); fi
	rm *.out
clean:	
	rm $(OBJS)*.o
	rm *.out



	
