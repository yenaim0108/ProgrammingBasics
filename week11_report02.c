#include <stdio.h>
/*
	배열을 10개 만들어서 각 방에다가 숫자 10개를 지정하고 최고 점수의 index 번호를 출력하기
*/
void main()
{
	//저장공간 확보 - 13개	
	int scr[10];       // 숫자 넣을 공간,숫자,정수
	int i;             // scr[]의 인덱스 값,숫자,정수
	int k;             // 비교할 숫자 기준,숫자,정수
	int max;           // 최고 점수의 index 번호,숫자,정수
	//값지정
	scr[0] = 35;
	scr[1] = 96;
	scr[2] = 46;
	scr[3] = 27;
	scr[4] = 4;
	scr[5] = 39;
	scr[6] = 28;
	scr[7] = 45;
	scr[8] = 76;
	scr[9] = 26;

	k = scr[0];

	for (i = 0; i < 10; i++)
	{
		if (k < scr[i])
		{
			k = scr[i];
			max = i;
		}
	}

	printf("최고 점수의 index 번호 : ");
	printf("%d ", max);
}