#include <stdio.h>
/*
	다음과 같이 출력 되도록 하라
	*****
	****
	***
	**
	*
*/
void main()
{
	//저장공간 확보 - 2개
	int line;         // "\n"을 출력하기 위한 숫자의 저장 공간,숫자,정수
	int star;         // "*"을 출력하기 위한 숫자의 저장 공간,숫자,정수
	//값지정
	for (line = 1; line <= 5; line++)
	{
		for (star = line; star <= 5; star++)
		{
			printf("*");
		}

		printf("\n");
	}
}