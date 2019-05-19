#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/*
	2���� �迭�� ����ؼ� ��� ���� �����
	��Ģ> 6�� �ȿ� ����ܾ �����!!
*/
void main()
{
	srand((unsigned)time(NULL));

	char words[10][11] = { "love", "computer", "moon", "choco", "security", "number", "smart", "wallet", "shoulder", "korea" };
	char word[10];
	int random, i;

	random = rand() % 10;               // ��ǻ�Ͱ� random���� �ܾ� ����

	for (i = 0; i < 10; i++)
	{
		word[i] = words[random][i];       // ��ǻ�Ͱ� ������ �ܾ �и��ϱ�
	}

	char alphabet, answer[10];
	int life, diff = 'A' - 'a', correct;

	life = 6;
	for (;;)
	{
		printf("Life : %d\n", life);     // ���� ����

		printf("���ĺ��� �Է��ϼ��� : ");
		fflush(stdin);
		scanf("%c", &alphabet);

		if (alphabet < 'a')                  // ����ڰ� �빮�ڸ� �Է����� ��� �ڵ����� �ҹ��ڷ� �ٲ��ֱ�
		{
			alphabet -= diff;
		}

		correct = 0;

		for (i = 0; i < 10; i++)
		{
			if (word[i] == alphabet)         // ����ڰ� �Է��� ���ĺ��� ��ǻ�Ͱ� ������ �ܾ �ִ��� Ȯ��
			{
				correct = 1;
			}
		}

		if (correct)                         // ����ڰ� �Է��� ���ĺ��� ���信 ������ ��ġ ���
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
					if ((answer[i] < 'a') || (answer[i] > 'z'))    // ����ڰ� ���� �Է��� ���ĺ��� ������ �� ������ �κ��� �״�� ���� ���� ����
					{
						answer[i] = '_';
					}
				}
				else{                  // NULL���ڰ� ������� ���� �״�� NULL���� �־��ֱ�
					answer[i] = NULL;
				}
			}

			for (i = 0; i < 10; i++)
			{
				printf("%c", answer[i]);
			}
		}
		else{                         // ����ڰ� �Է��� ���ĺ��� ���信 ������ ���� ����
			life--;
			printf("Wrong!\n\n");
		}

		correct = 0;

		for (i = 0; i < 10; i++)
		{
			if ((word[i] == answer[i]))    // ��ǻ�Ͱ� �Է��� �ܾ�� ����ڰ� �Է��� �ܾ ������ Ȯ��
			{
				correct += 1;
			}
		}

		if (correct == 10)                 // 6���ȿ� ���߸� You WIN!!
		{
			printf("\n\nYou WIN!!\n\n");
			break;
		}
		else if (life == 0)                //6���ȿ� �����߸� �ٺ�!!
		{
			printf("�ٺ�!!\n������ %s �̾�!!\n\n", words[random]);
			break;
		}
	}
}