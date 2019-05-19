#include <stdio.h>
#include <stdlib.h> // rand(),srand()을 사용하기 위해서...
#include <time.h>   // time 함수를 사용하기 위해서...
/*
	숫자로 하는 야구 게임을 완성해 보자
	(수업 시간에 다룬 프로그램입니다. 그때 설명 드린 방식으로 작동하게 하면 됩니다)
*/
void main()
{
	int random, arr[4], k, i, sq, eq;

	srand(time(NULL));  // seed 값 사용

	for (eq = 0;;)                            // 아래 for(int vs = 0; ; vs++)에 random을 넣으면 난수가 계속 바뀌어서 for(int vs = 0; ; vs++) 밖에 따로 for문을 만들어줌
	{
		random = rand() % 10000;              // 컴퓨터가 첫번째 숫자 입력
		sq = 1000;

		for (i = 0; i < 4; i++)                // 배열을 이용해서 각 자리수 분리
		{
			arr[i] = random / sq % 10;

			sq = sq / 10;
		}

		for (k = 0; k < 3; k++)                // 컴퓨터가 입력한 4자리수 중에서 중복되는 값이 있는지 확인
		{
			for (i = k + 1; i < 4; i++)
			{
				if (arr[k] == arr[i])
				{
					eq = 1;
				}
			}
		}

		if (eq)                               // 숫자가 중첩되면 컴퓨터에게 다른 숫자를 받아오기
		{
			eq = 0;
			continue;
		}
		else{
			break;
		}
	}

	int num;

	for (int vs = 0; vs < 7; vs++)             // 야구게임 7번 돌리기
	{
		printf("4자리 숫자 입력 : ");
		scanf("%d", &num);

		int str[4];
		sq = 1000;
		eq = 0;

		for (i = 0; i < 4; i++)           // 배열을 이용해서 각 자리수 분리
		{
			str[i] = num / sq % 10;

			sq = sq / 10;
		}

		for (k = 0; k < 3; k++)           // 사용자가 입력한 4자리수 중에서 중복되는 값이 있는지 확인
		{
			for (i = k + 1; i < 4; i++)
			{
				if (str[k] == str[i])
				{
					eq = 1;
				}
			}
		}

		int strike, ball;
		strike = 0;
		ball = 0;

		if (eq)                           // 숫자가 중첩되면 컴퓨터에게 다른 숫자를 받아오기
		{
			printf("숫자가 중첩되지 않게 값을 다시 입력 하세요\n");
			continue;
		}
		else{                           // 숫자가 중첩되지 않을 때
			for (k = 0; k < 4; k++)
			{
				for (i = 0; i < 4; i++)
				{
					if (arr[k] == str[i])
					{
						if (k == i)       // 숫자가 같은데 자릿수가 같으면 strike
						{
							strike += 1;
						}
						else{           // 숫자가 같은데 자릿수가 다르면 ball
							ball += 1;
						}
					}
				}
			}

			printf("%d strike\n", strike);
			printf("%d ball\n ", ball);
		}

		if (random == num)               // 사용자가 7번 내에 맞추면 "You WIN!!" 출력
		{
			printf("\nYou WIN!! ");
			break;
		}
		else if (vs == 6)                // 사용자가 7번 내에 못맞추면 "바보!!" 출력
		{
			printf("\n바보!!\n");
			printf("정답은 %d 이야!! ", random);
			break;
		}
	}

}