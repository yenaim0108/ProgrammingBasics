#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/*
	2차원 배열을 사용해서 행맨 게임 만들기
	규칙> 6번 안에 영어단어를 맞춰라!!
*/
void main()
{
	srand((unsigned)time(NULL));

	char words[10][11] = { "love", "computer", "moon", "choco", "security", "number", "smart", "wallet", "shoulder", "korea" };
	char word[10];
	int random, i;

	random = rand() % 10;               // 컴퓨터가 random으로 단어 선택

	for (i = 0; i < 10; i++)
	{
		word[i] = words[random][i];       // 컴퓨터가 선택한 단어를 분리하기
	}

	char alphabet, answer[10];
	int life, diff = 'A' - 'a', correct;

	life = 6;
	for (;;)
	{
		printf("Life : %d\n", life);     // 남은 생명

		printf("알파벳을 입력하세요 : ");
		fflush(stdin);
		scanf("%c", &alphabet);

		if (alphabet < 'a')                  // 사용자가 대문자를 입력했을 경우 자동으로 소문자로 바꿔주기
		{
			alphabet -= diff;
		}

		correct = 0;

		for (i = 0; i < 10; i++)
		{
			if (word[i] == alphabet)         // 사용자가 입력한 알파벳이 컴퓨터가 선택한 단어에 있는지 확인
			{
				correct = 1;
			}
		}

		if (correct)                         // 사용자가 입력한 알파벳이 정답에 있으면 위치 출력
		{
			printf("Correct!\n");

			for (i = 0; i < 10; i++)
			{
				if (word[i] == alphabet)
				{
					answer[i] = word[i];
				}
				else if (word[i] != 0)
				{
					if ((answer[i] < 'a') || (answer[i] > 'z'))    // 사용자가 전에 입력한 알파벳이 정답일 때 정답인 부분을 그대로 남겨 놓기 위함
					{
						answer[i] = '_';
					}
				}
				else{                  // NULL문자가 들어있을 때는 그대로 NULL문자 넣어주기
					answer[i] = NULL;
				}
			}

			for (i = 0; i < 10; i++)
			{
				printf("%c", answer[i]);
			}
		}
		else{                         // 사용자가 입력한 알파벳이 정답에 없으면 생명 깎임
			life--;
			printf("Wrong!\n\n");
		}

		correct = 0;

		for (i = 0; i < 10; i++)
		{
			if ((word[i] == answer[i]))    // 컴퓨터가 입력한 단어랑 사용자가 입력한 단어가 같은지 확인
			{
				correct += 1;
			}
		}

		if (correct == 10)                 // 6번안에 맞추면 You WIN!!
		{
			printf("\n\nYou WIN!!\n\n");
			break;
		}
		else if (life == 0)                //6번안에 못맞추면 바보!!
		{
			printf("바보!!\n정답은 %s 이야!!\n\n", words[random]);
			break;
		}
	}
}