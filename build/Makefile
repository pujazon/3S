#Object files shouldn't be on the repository. 
#They must be compilated on time
.PHONY: all

CC=g++
STEST=./../test/
SRC=./../src/
OBJS=./objs/
BIN=./

#TODO: setup shouldn't be done in a explicit build

all: Main.o And2.o Or2.o Not.o Mux2_1.o	FullAdder.o Add16N.o Sub16.o FullSubstractor.o Z16.o Eq.o Leu.o \
 Ltu.o Add16Z.o Utils.o \
	$(CC) -o $(BIN)3S.out $(OBJS)Main.o $(OBJS)And2.o $(OBJS)Or2.o $(OBJS)Not.o $(OBJS)Mux2_1.o \
	 $(OBJS)FullAdder.o $(OBJS)Add16N.o $(OBJS)FullSubstractor.o $(OBJS)Sub16.o $(OBJS)Z16.o $(OBJS)Eq.o \
	  $(OBJS)Leu.o $(OBJS)Ltu.o $(OBJS)Add16Z.o $(OBJS)Utils.o

setup: 
	mkdir $(OBJS)

lgatesTL: Xor2.o And2.o Or2.o Not.o Mux2_1.o UtilsTest.o Utils.o
	$(CC) -c $(STEST)lgatesTL.cpp 
	$(CC) -o $(BIN)lgatesTL.out $(BIN)lgatesTL.o $(OBJS)And2.o $(OBJS)Xor2.o $(OBJS)Or2.o \
	 $(OBJS)Not.o $(OBJS)Mux2_1.o $(OBJS)UtilsTest.o $(OBJS)Utils.o 
	rm $(BIN)lgatesTL.o
	rm $(OBJS)UtilsTest.o

arithmeticTL: Xor2.o Or2.o FullAdder.o Add16N.o Add16Z.o Not.o FullSubstractor.o Sub16.o \
UtilsTest.o Z16.o Eq.o Leu.o Ltu.o Utils.o
	$(CC) -c $(STEST)arithmeticTL.cpp 
	$(CC) -o $(BIN)arithmeticTL.out $(BIN)arithmeticTL.o $(OBJS)Not.o $(OBJS)Xor2.o $(OBJS)FullAdder.o \
	 $(OBJS)Add16N.o $(OBJS)Add16Z.o $(OBJS)Or2.o \
	 $(OBJS)FullSubstractor.o $(OBJS)Z16.o  $(OBJS)UtilsTest.o $(OBJS)Sub16.o $(OBJS)Eq.o $(OBJS)Leu.o $(OBJS)Ltu.o \
	  $(OBJS)Utils.o \
	rm $(BIN)arithmeticTL.o
	rm $(OBJS)UtilsTest.o

And2.o:
	$(CC) -c $(SRC)And2.cpp
	mv And2.o $(OBJS)

Or2.o:
	$(CC) -c $(SRC)Or2.cpp
	mv Or2.o $(OBJS)
	
Xor2.o:
	$(CC) -c $(SRC)Xor2.cpp
	mv Xor2.o $(OBJS)

Not.o:
	$(CC) -c $(SRC)Not.cpp
	mv Not.o $(OBJS)

Mux2_1.o:
	$(CC) -c $(SRC)Mux2_1.cpp
	mv Mux2_1.o $(OBJS)

Utils.o:
	$(CC) -c $(SRC)Utils.cpp
	mv Utils.o $(OBJS)

UtilsTest.o:
	$(CC) -c $(STEST)UtilsTest.cpp
	mv UtilsTest.o $(OBJS)

Main.o:
	$(CC) -c $(SRC)Main.cpp
	mv Main.o $(OBJS)

FullAdder.o:
	$(CC) -c $(SRC)FullAdder.cpp
	mv FullAdder.o $(OBJS)

FullSubstractor.o:
	$(CC) -c $(SRC)FullSubstractor.cpp
	mv FullSubstractor.o $(OBJS)

Add16N.o:
	$(CC) -c $(SRC)Add16N.cpp
	mv Add16N.o $(OBJS)
	
Add16Z.o:
	$(CC) -c $(SRC)Add16Z.cpp
	mv Add16Z.o $(OBJS)

Sub16.o:
	$(CC) -c $(SRC)Sub16.cpp
	mv Sub16.o $(OBJS)

Z16.o:
	$(CC) -c $(SRC)Z16.cpp
	mv Z16.o $(OBJS)

Eq.o:
	$(CC) -c $(SRC)Eq.cpp
	mv Eq.o $(OBJS)	

Leu.o:
	$(CC) -c $(SRC)Leu.cpp
	mv Leu.o $(OBJS)

Ltu.o:
	$(CC) -c $(SRC)Ltu.cpp
	mv Ltu.o $(OBJS)			
	
clean_all:	
	if [ -d "$(OBJS)" ]; then rm -r $(OBJS); fi
	rm *.out
clean:	
	rm $(OBJS)*.o
	rm *.out



	
