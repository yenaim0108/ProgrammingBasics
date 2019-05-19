#include <stdio.h>
/*
	다음과 같이 출력 되도록 하라
	**********
	 ********
	  ******
	   ****
	    **
*/
void main()
{
	//저장공간 확보 - 4개
	int line;         // "\n"을 출력하기 위한 숫자의 저장공간,숫자,정수
	int l_blank;      // 삼각형의 왼쪽 " "(공백)을 출력하기 위한 숫자의 저장공간,숫자,정수
	int star;         // "*"을 출력하기 위한 숫자의 저장공간,숫자,정수
	int r_blank;      // 삼각형의 오른쪽 " "(공백)을 출력하기 위한 숫자의 저장공간,숫자,정수
	//값지정
	for (line = 0; line < 10; line = line + 2)
	{
		for (l_blank = line; l_blank > 0; l_blank = l_blank - 2)
		{
			printf(" ");
		}

		for (star = line; star < 10; star++)
		{
			printf("*");
		}

		for (r_blank = line; r_blank > 0; r_blank = r_blank - 2)
		{
			printf(" ");
		}

		printf("\n");
	}
}
