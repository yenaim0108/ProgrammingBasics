#include <stdio.h>
/*
	배열을 10개 만들어서 각 방에다가 숫자 10개를 지정하고 최고 점수를 출력하기
*/
void main()
{
	//저장공간 확보 - 12개	
	int scr[10];       // 숫자 넣을 공간,숫자,정수
	int i;             // scr[]의 인덱스 값,숫자,정수
	int k;             // 비교할 숫자 기준,숫자,정수
	//값지정
	scr[0] = 44;
	scr[1] = 5;
	scr[2] = 56;
	scr[3] = 75;
	scr[4] = 100;
	scr[5] = 67;
	scr[6] = 84;
	scr[7] = 78;
	scr[8] = 62;
	scr[9] = 7;

	k = scr[0];

	for (i = 0; i < 10; i++)
	{
		if (k < scr[i])
		{
			k = scr[i];
		}
	}

	printf("최고 점수 : ");
	printf("%d ", k);
}