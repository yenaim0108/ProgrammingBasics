#include <stdio.h>
/*
	헹맨 게임을 만들어보자 
	컴퓨터는 하나의 단어를 가지고 있다 예를 들어 seoul.
	프로그램은 각 철자를 처음에는 
	*****
	인 상태로 플레이어에게 보여준다.
	플레이어가 
	a 
	를 입력하면 
	해당 문자는 존재 하지 않습니다. 남은 기회는 6번 입니다
	또,
	e
	를 입력하면
	*e***
	으로 보여준다.
	이러한 방식으로 6번의 기회만에 맞추면 성공 그렇지 못하면 실패라고 플레이어에게 보여주면 된다.
	주) 단어는 아무 단어나 가능하고, 가급적이면 긴 단어를 사용하세요
*/
void main()
{
	char word[13] = { "independence" }, alphabet, answer[13];
	int i, life, diff = 'A' - 'a', correct;

	for (i = 0; i < 13; i++)               // 단어 철자 수만큼 *출력하기
	{
		if (word[i] != NULL)
		{
			printf("*");
		}
		else{
			break;
		}
	}

	life = 6;
	for (;;)
	{
		printf("\n알파벳을 입력하세요 : ");
		fflush(stdin);
		scanf("%c", &alphabet);

		if (alphabet < 'a')                  // 사용자가 대문자를 입력했을 경우 자동으로 소문자로 바꿔주기
		{
			alphabet -= diff;
		}

		correct = 0;

		for (i = 0; i < 13; i++)
		{
			if (word[i] == alphabet)         // 사용자가 입력한 알파벳이 컴퓨터가 선택한 단어에 있는지 확인
			{
				correct = 1;
			}
		}

		if (correct)                         // 사용자가 입력한 알파벳이 정답에 있으면 위치 출력
		{
			for (i = 0; i < 13; i++)
			{
				if (word[i] == alphabet)
				{
					answer[i] = word[i];
				}
				else if (word[i] != 0)
				{
					if ((answer[i] < 'a') || (answer[i] > 'z'))    // 사용자가 전에 입력한 알파벳이 정답일 때 정답인 부분을 그대로 남겨 놓기 위함
					{
						answer[i] = '*';
					}
				}
				else{                  // NULL문자가 들어있을 때는 그대로 NULL문자 넣어주기
					answer[i] = NULL;
				}
			}

			for (i = 0; i < 13; i++)
			{
				printf("%c", answer[i]);
			}
		}
		else{                         // 사용자가 입력한 알파벳이 정답에 없으면 생명 깎임
			life--;
			printf("해당 문자는 존재 하지 않습니다. 남은 기회는 %d번 입니다\n", life);
		}

		correct = 0;

		for (i = 0; i < 13; i++)
		{
			if ((word[i] == answer[i]))    // 컴퓨터가 입력한 단어랑 사용자가 입력한 단어가 같은지 확인
			{
				correct += 1;
			}
		}

		if (correct == 13)                 // 6번안에 맞추면 성공
		{
			printf("\n\n성공\n\n");
			break;
		}
		else if (life == 0)                //6번안에 못맞추면 실패
		{
			printf("\n실패\n정답은 ");
			for (i = 0; i < 13; i++)
			{
				printf("%c", word[i]);
			}
			printf("야!!\n\n");
			break;
		}
	}
}