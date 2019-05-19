#include <stdio.h>
/*
	1~100까지 369게임(3의 배수 or 3,6,9가 들어간 숫자는 모두 "짝"으로 출력!! 나머지는 숫자로 출력!!)
*/
void main()
{
	//변수선언
	int i;//369게임 숫자,숫자,정수
	//값지정

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("짝");
			continue;
		}
		if (i % 10 == 0)
		{
			printf("%d", i);
			continue;
		}
		if (i % 10 % 3 == 0)
		{
			printf("짝");
			continue;
		}
		if (i / 10 == 0)
		{
			printf("%d", i);
			continue;
		}
		if (i / 10 % 3 == 0)
		{
			printf("짝");
			continue;
		}
		printf("%d", i);

	}
}