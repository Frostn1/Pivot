#ifndef CHUNK_H
#define CHUNK_H

#include "KeyWord.h"
#define CHUNKSIZE 24

typedef struct Chunk
{
	Keyword interns[CHUNKSIZE];
}Chunk;

#endif // !CHUNK_H