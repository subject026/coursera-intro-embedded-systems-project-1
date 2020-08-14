default: stats.o
	gcc stats.o -o output

clean: 
	rm *.o output

stats.o: stats.c stats.h
	gcc -c stats.c