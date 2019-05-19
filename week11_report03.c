#include <stdio.h>
/*
	배열을 10개 만들어서 각 방에다가 숫자 10개를 지정하고 10개의 방에 큰 점수부터 나열되도록 자리를 바꾸기
*/
// tmp 확보 X + if문 사용
void main()
{
	//저장공간 확보 - 14개
	int scr[10];      // 숫자 넣을 공간,숫자,정수
	int i;            // scr[]의 인덱스 값,숫자,정수
	int k;            // 비교할 숫자의 기준,숫자,정수
	int cp_k;         // k의 복제 값,숫자,정수
	int max;          // 최고 점수의 index 번호,숫자,정수
	//값지정
	scr[0] = 45;
	scr[1] = 5;
	scr[2] = 6;
	scr[3] = 87;
	scr[4] = 89;
	scr[5] = 62;
	scr[6] = 100;
	scr[7] = 46;
	scr[8] = 56;
	scr[9] = 92;

	for (k = 0; k < 9; k++)
	{
		cp_k = k;
		k = scr[k];

		for (i = cp_k; i < 10; i++)
		{
			if (k <= scr[i])
			{
				k = scr[i];
				max = i;
			}
		}

		if (cp_k != max)                         // 현재 비교하는 값과 동일한 값이 있거나 큰 값이 없을 때를 위해서...
		{
			scr[cp_k] += scr[max];
			scr[max] = scr[cp_k] - scr[max];
			scr[cp_k] -= scr[max];
		}

		k = cp_k;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", scr[i]);
	}
}