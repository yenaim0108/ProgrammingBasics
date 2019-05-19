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
	int line;         //줄바꿈 위한 변수,숫자,정수
	int star;         //"*"출력을 위한 변수,숫자,정수
	//값지정
	for (line = 0; line <= 8; line++)
	{
		if (line < 5)
		{
			for (star = 0; star <= line; star++)
			{
				printf("*");
			}

			printf("\n");
			continue;
		}

		else
		{
			for (star = 9; star > line; star--)
			{
				printf("*");
			}

			printf("\n");
		}
	}
}