pi: main.o token.o lexer.o
	gcc main.o token.o lexer.o -o pi

main.o: ./src/main.c
	gcc -c ./src/main.c 

token.o: ./src/token.c
	gcc -c ./src/token.c

lexer.o: ./src/lexer.c
	gcc -c ./src/lexer.c
	
clean:
	rm *.o *.exe