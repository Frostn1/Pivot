#include <stdio.h>
#include "Stack.h"
#include "ConInPost.h"
#include "CalcPost.h"
Result* convertTest();

int main()
{
	Result* caps = (Result*)malloc(sizeof(Result));
	caps = convertTest();
	if (caps->sel)
	{
		printf("%.2f", caps->resultF);
	}
	else
	{
		printf("%d", caps->resultI);
	}


	/*Stack* s = (Stack*)malloc(sizeof(Stack));
	s->sp = 0;
	s->bp = 0;

	char letter[2] = "+";
	char letter2[2] = "-";
	Push(s, letter);
	Push(s, letter2);
	char* retu = Pop(s);
	printf("%s", retu);
	retu = Pop(s);
	printf("%s", retu);
	printf("%d", sizeof(letter) / sizeof(letter[0]));*/
	return 0;
}

Result* convertTest()
{
	char** buffer = (char**)malloc(5 * sizeof(char*));
	buffer[0] = (char*)malloc(sizeof(char) * 2);
	buffer[1] = (char*)malloc(sizeof(char) * 1);
	buffer[2] = (char*)malloc(sizeof(char) * 1);
	buffer[3] = (char*)malloc(sizeof(char) * 1);
	buffer[4] = (char*)malloc(sizeof(char) * 1);

	buffer[0] = "1.2";
	buffer[1] = "+";
	buffer[2] = "2";
	buffer[3] = "*";
	buffer[4] = "3";

	buffer = Convert(buffer, 5);

	return Calculate(buffer, 5);

}

