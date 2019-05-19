#include <stdio.h>
/*
	다음과 같이 출력하라
	*
	**
	***
	****
	*****
	****
	***
	**
	*
*/
void main()
{
	//저장공간 확보 - 2개
	int line;         // 줄바꿈 위한 변수,숫자,정수
	int star;         // "*"출력을 위한 변수,숫자,정수
	//값지정
	for (line = 0; line < 5; line++)
	{
		for (star = 0; star <= line; star++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (line = 0; line < 4; line++)
	{
		for (star = line; star < 4; star++)
		{
			printf("*");
		}

		printf("\n");
	}

}