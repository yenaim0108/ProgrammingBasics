#include <stdio.h>
#include <stdlib.h> // rand(),srand()을 사용하기 위해서...
#include <time.h>   // time 함수를 사용하기 위해서...
/*
	[숫자야구게임 만드는 과정 4] 첫 번째 입력하는 4자리 숫자를 컴퓨터가 입력하게 한다. + 중복된 값이 있을 때는 "다시 입력하세요"를 출력하고 값을 다시 받는다.
	1. [야구게임 만드는 과정 3]에 한 코딩을 보면 입력받은 숫자 2개 모두 사람이 입력했다.
	[야구게임 만드는 과정 4]에서는 숫자 1개를 rand(),srand()를 써서 컴퓨터가 입력하게 한다.
	  - rand(), srand()는 인터넷에 검색을 해서 공부한뒤 사용한다.
	  - rand()를 쓰면 항상 규칙적인 난수가 나오므로 최종적으로는 srand()를 써서 무작위의 난수를 쓴다.
	  - 아래는 rand()와 srand()에 설명이 잘 나와있는 블로그 링크를 첨부합니다.
		http://www.jynote.net/64
		http://k-story.tistory.com/132
	2. 중복된 값이 있어서 “다시 입력하세요”라고 출력했으면 값을 다시 받는다.
	  - 값을 받아서 배열을 이용해 분리하는 식과 중복된 값을 찾는 식 전체를 감싸는 for문을 만들어준다.
	  - 중복된 값이 있으면 for문에 맨 처음으로 올라가서 값을 다시 받는다.(중복된 값이 없을 때까지 계속 값을 받는다.)
*/
void main()
{
	int random, arr[4], k, i, sq, eq;

	srand(time(NULL));  // seed 값 사용

	for (eq = 0;;)
	{
		random = rand() % 10000;              // 컴퓨터가 첫번째 숫자 입력

		printf("1번째 4자리 숫자 입력 : ");
		printf("%d\n", random);

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

	for (eq = 0;;)
	{
		printf("2번째 4자리 숫자 입력 : ");
		scanf("%d", &num);

		int str[4];
		sq = 1000;

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
			eq = 0;
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
			printf("%d ball\n", ball);

			break;
		}

	}

