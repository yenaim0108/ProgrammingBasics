#include <stdio.h>
/*
	1부터 100까지 홀수만 더하기
*/
void main()
{
	//변수선언
	int i;//홀수의 값/숫자/정수
	int sum = 0;//1부터 100까지 홀수만 더한 값/숫자/정수
	for (i = 1; i <= 99; i = i + 2)
	{
		sum = sum + i;

	}
	printf("%d", sum);

}