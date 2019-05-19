#include <stdio.h>
/*
	90 이상 "A"
	80 이상 "B"
	70 이상 "C"
	60 이상 "D"
	60 미만 "F"
	모든경우 "수고하셨습니다"
*/
void main()
{
	//저장공간 확보 - 1개
	int score;//점수/숫자/정수
	//값지정
	scanf("%d", &score);
	if (score >= 90)
	{
		printf("A");

	}
	else if (score >= 80)
	{
		printf("B");

	}
	else if (score >= 70)
	{
		printf("C");

	}
	else if (score >= 60)
	{
		printf("D");

	}
	else
	{
		printf("F");

	}
	printf("수고하셨습니다");

}