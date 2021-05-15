pi: pi.o
	gcc pi.o -o pi

pi.o: ./src/main.c
	gcc -c ./src/main.c 

clean:
	rm *.o *.exe