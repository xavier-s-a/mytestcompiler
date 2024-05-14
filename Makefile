OBJECTS=./build/compile.o ./build/cprocess.o
INCLUDES= -I./

all: ${OBJECTS}
	gcc main.c ${INCLUDES} -g -o ./main
./build/compile.o: ./compile.c
	gcc -c compile.c ${INCLUDES} -o ./build/compile.o -g -c
./build/cprocess.o: ./cprocess.c
	gcc -c cprocess.c ${INCLUDES} -o ./build/cprocess.o -g -c


	rm -f ./main
	rm -rf  ${OBJECTS}