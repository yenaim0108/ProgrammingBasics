#include <stdio.h>
/*
	for문 안에 if문을 써서 1부터 100까지 짝수는 짝수끼리 더하고 홀수는 홀수끼리 더하기(% 이용하기) - 값 2개 나옴
*/
void main()
{
	//변수선언
	int i;//짝수의 값or홀수의 값,숫자,정수
	int sum = 0;//1부터 100까지 짝수만 더한 값,숫자,정수
	int sum_2 = 0;//1부터 100까지 홀수만 더한 값,숫자,정수
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;

		}
		else{
			sum_2 = sum_2 + i;

		}

	}
	printf("1부터 100까지 짝수만 더한 값 : ");
	printf("%d", sum);
	printf(", 1부터 100까지 홀수만 더한 값 : ");
	printf("%d", sum_2);
}