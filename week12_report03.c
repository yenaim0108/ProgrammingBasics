#include <stdio.h>
/*
	[숫자야구게임 만드는 과정 3] 배열을 하나 더 선언해서 두 배열을 비교한다. 숫자가 같은데 자릿수가 같으면 strike, 숫자가 같은데 자릿수가 다르면 ball
	1. [야구게임 만드는 과정 2]에 한 코딩에 이어서 숫자 4개를 하나 더 입력받고 배열을 하나 더 선언해서 하나 더 입력받은 숫자를 분리해서 넣는다.
	즉, [야구게임 만드는 과정 2]에 한 코딩에 이어서 [야구게임 만드는 과정 1]에서 한 코딩을 변수만 다르게 한번 더 써준다.
	2. 두 배열을 비교해서 숫자가 같은데 자릿수가 같으면 strike, 숫자가 같은데 자릿수가 다르면 ball
	최종적으로 strike개수와 ball개수를 출력한다.
	ex) 3471, 4321을 입력받음 --> 1 strike, 2 ball 출력
*/
void main()
{
	int num, num_2, arr[4], str[4], k, i, sq = 1000, eq;

	for (eq = 0;;)
	{
		printf("1번째 4자리 숫자 입력 : ");
		scanf("%d", &num);                         // 사용자가 첫번째 숫자 입력
		printf("\n2번째 4자리 숫자 입력 : ");
		scanf("%d", &num_2);                       // 사용자가 두번째 숫자 입력

		for (i = 0; i < 4; i++)                    // 배열을 이용해서 각 자리수 분리
		{
			arr[i] = num / sq % 10;

			sq = sq / 10;
		}

		for (k = 0; k < 3; k++)                    // 입력받은 num 4자리수 중에서 중복되는 값이 있는지 확인
		{
			for (i = k + 1; i < 4; i++)
			{
				if (arr[k] == arr[i])
				{
					eq = 1;
				}
			}
		}

		sq = 1000;

		for (i = 0; i < 4; i++)                    // 배열을 이용해서 각 자리수 분리
		{
			str[i] = num_2 / sq % 10;

			sq = sq / 10;
		}

		for (k = 0; k < 3; k++)                    // 입력받은 num_2 4자리수 중에서 중복되는 값이 있는지 확인
		{
			for (i = k + 1; i < 4; i++)
			{
				if (str[k] == str[i])
				{
					eq = 1;
				}
			}
		}

		int strike = 0, ball = 0;

		if (eq)                                    // 숫자가 중첩되면 "다시 입력하세요" 출력하기
		{
			printf("숫자가 중첩되지 않게 값을 다시 입력 하세요\n\n");
			break;
		}
		else{                                   // 숫자가 중첩되지 않을 때
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
			printf("%d ball\n", ball);
			break;
		}

	}
}