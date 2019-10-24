all: llmain.o llfuncs.o
	gcc -o test llmain.o llfuncs.o

llmain.o: llmain.c llh.h
	gcc -c llmain.c

llfuncs.o: llfuncs.c llh.h
	gcc -c llfuncs.c

run:
	./test

clean:
	rm *.o
	rm *~
