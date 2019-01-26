main: main.o init.o print.o add.o delete.o showOptions.o search.o release_node.o get_node.o
	gcc -o main main.o init.o print.o add.o delete.o showOptions.o search.o release_node.o get_node.o
main.o: main.c PA2.h
	gcc -c main.c
init.o: init.c PA2.h
	gcc -c init.c
print.o: print.c PA2.h
	gcc -c print.c
add.o: add.c PA2.h 
	gcc -c add.c
delete.o: delete.c PA2.h
	gcc -c delete.c
showOptions.o: showOptions.c 
	gcc -c showOptions.c
search.o: search.c PA2.h
	gcc -c search.c
release_node.o: release_node.c PA2.h
	gcc -c release_node.c
get_node.o: get_node.c PA2.h
	gcc -c get_node.c
clean: 
	rm main main.o init.o print.o add.o delete.o showOptions.o search.o release_node.o get_node.o

