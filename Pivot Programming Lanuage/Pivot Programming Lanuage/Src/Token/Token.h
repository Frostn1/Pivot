#ifndef TOKEN_H
#define TOKEN_H

typedef struct PI_TOKEN_86 {
	int line; // Token's Line
	int column; // Token's Column
	int id; // Token's Id
	
	char* name; // Token's Name
	char* value; // Token's value ( not always )

	
}PI_Token;

#endif // !TOKEN_H
