#include <stdio.h>
/*
	1부터 100까지 3의 배수만 더하기
*/
void main()
{
	//변수선언
	int i;//3의배수의 값/숫자/정수
	int n = 0;//3의 배수를 구하기 위해 필요한 값/숫자/정수
	int sum = 0;//1부터 100까지 3의 배수만 더한 값/숫자/정수
	for (i = 0; i <= 99; i = (n = n + 1) * 3)
	{
		sum = sum + i;
	}
	printf("%d", sum);

}