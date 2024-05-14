OBJECTS=./build/compile.o ./build/cprocess.o ./build/helpers/buffer.o ./build/helpers/vector.o
INCLUDES= -I./

all: ${OBJECTS}
	gcc main.c ${INCLUDES} -g -o ./main
./build/compile.o: ./compile.c
	gcc -c compile.c ${INCLUDES} -o ./build/compile.o -g -c
./build/cprocess.o: ./cprocess.c
	gcc -c cprocess.c ${INCLUDES} -o ./build/cprocess.o -g -c
./build/helpers/buffer.o: ./helpers/buffer.c
	gcc -c ./helpers/buffer.c ${INCLUDES} -o ./build/helpers/buffer.o -g -c
./build/helpers/vector.o: ./helpers/vector.c
	gcc -c ./helpers/vector.c ${INCLUDES} -o ./build/helpers/vector.o -g -c


clean:

	rm -f ./main
	rm -rf  ${OBJECTS}