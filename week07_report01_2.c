#include <stdio.h>
/*
	2차 : 1~10000까지 369게임(3의 배수 or 3, 6, 9가 들어가는 숫자는 모두 "짝"으로 출력, 나머지는 숫자로 출력)
*/
// for문안에 for문 써서 함
void main()
{
	//저장공간확보
	int i;             //369게임 숫자.숫자.정수
	int h;             //i의 임시저장공간,숫자,정수
	int tmp;       //369게임 숫자 n자리의 임시저장공간,숫자,정수
	int i_369;         //숫자에 3, 6, 9가 들어갔는지 확인하기 위해 필요한 변수,숫자,정수
	int sq;            //10의 n승을 저장하기 위한 공간,숫자,정수 
	//값지정
	for (i = 1; i <= 10000; i++)
	{
		h = i;
		tmp = 0;
		i_369 = 0;

		if ((i % 3) == 0)
		{
			printf("짝 ");
			continue;
		}

		for (sq = 1000; sq > 0; sq = sq / 10)
		{
			if (h >= sq)
			{
				tmp = h / sq;

				if ((tmp % 3) == 0)
				{
					i_369 = 1;
				}
			}

			if ((h - (tmp * sq)) < 0)
			{
				h = h;
			}
			else
			{
				h = h - (tmp * sq);
			}
		}

		if (i_369)
		{
			printf("짝 ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}