# 3S
SISC Simulator. Simulator of simple RISC processor

<hr>
<h2>Repository directories:</h2>
<hr>

./src 	Has the source code of 3S.
./test 	Has the source code of tests about 3S functionalities and their modules.
./build Has the Makefile and is there where the binaries will be compiled.
	
<hr>
<h2>Makefile:</h2>
<hr>	
	make setup: 	Creates initial setup for compilations.
	make all:	Compiles 3S.
	make lgatesTL:	Compiles lgatesTL test.
	make clean:	Removes objects but preserves setup folders created on make setup.
	make clean_all: Removes objects and setup folders.
