#include <stdio.h>
/*
	다음과 같이 출력 되도록 하라
	**********
	          *********
	  ********
	          *******
	    ******
	          *****
	      ****
	          ***
	        **
	          *
*/
void main()
{
	//저장공간 확보 - 5개
	int number;       // 짝수, 홀수를 구분하기 위한 변수,숫자,정수
	int odd_blank;    // 홀수개의 "*" 앞에 " "(공백) 출력을 위한 숫자의 저장공간,숫자,정수
	int odd;          // 홀수개의 "*" 출력을 위한 숫자의 저장공간,숫자,정수
	int even_blank;   // 짝수개의 "*" 앞에 " "(공백) 출력을 위한 숫자의 저장공간,숫자,정수
	int even;         // 짝수개의 "*" 출력을 위한 숫자의 저장공간,숫자,정수
	//값지정
	for (number = 10; number > 0; number--)
	{
		if (number % 2)
		{
			for (odd_blank = 1; odd_blank <= 10; odd_blank++)
			{
				printf(" ");
			}

			for (odd = number; odd > 0; odd--)
			{
				printf("*");
			}
		}
		else
		{
			for (even_blank = number; even_blank < 10; even_blank++)
			{
				printf(" ");
			}

			for (even = number; even > 0; even--)
			{
				printf("*");
			}
		}

		printf("\n");
	}
}