#include <stdio.h>
/*
	��� ������ ������ 
	��ǻ�ʹ� �ϳ��� �ܾ ������ �ִ� ���� ��� seoul.
	���α׷��� �� ö�ڸ� ó������ 
	*****
	�� ���·� �÷��̾�� �����ش�.
	�÷��̾ 
	a 
	�� �Է��ϸ� 
	�ش� ���ڴ� ���� ���� �ʽ��ϴ�. ���� ��ȸ�� 6�� �Դϴ�
	��,
	e
	�� �Է��ϸ�
	*e***
	���� �����ش�.
	�̷��� ������� 6���� ��ȸ���� ���߸� ���� �׷��� ���ϸ� ���ж�� �÷��̾�� �����ָ� �ȴ�.
	��) �ܾ�� �ƹ� �ܾ �����ϰ�, �������̸� �� �ܾ ����ϼ���
*/
void main()
{
	char word[13] = { "independence" }, alphabet, answer[13];
	int i, life, diff = 'A' - 'a', correct;

	for (i = 0; i < 13; i++)               // �ܾ� ö�� ����ŭ *����ϱ�
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
		printf("\n���ĺ��� �Է��ϼ��� : ");
		fflush(stdin);
		scanf("%c", &alphabet);

		if (alphabet < 'a')                  // ����ڰ� �빮�ڸ� �Է����� ��� �ڵ����� �ҹ��ڷ� �ٲ��ֱ�
		{
			alphabet -= diff;
		}

		correct = 0;

		for (i = 0; i < 13; i++)
		{
			if (word[i] == alphabet)         // ����ڰ� �Է��� ���ĺ��� ��ǻ�Ͱ� ������ �ܾ �ִ��� Ȯ��
			{
				correct = 1;
			}
		}

		if (correct)                         // ����ڰ� �Է��� ���ĺ��� ���信 ������ ��ġ ���
		{
			for (i = 0; i < 13; i++)
			{
				if (word[i] == alphabet)
				{
					answer[i] = word[i];
				}
				else if (word[i] != 0)
				{
					if ((answer[i] < 'a') || (answer[i] > 'z'))    // ����ڰ� ���� �Է��� ���ĺ��� ������ �� ������ �κ��� �״�� ���� ���� ����
					{
						answer[i] = '*';
					}
				}
				else{                  // NULL���ڰ� ������� ���� �״�� NULL���� �־��ֱ�
					answer[i] = NULL;
				}
			}

			for (i = 0; i < 13; i++)
			{
				printf("%c", answer[i]);
			}
		}
		else{                         // ����ڰ� �Է��� ���ĺ��� ���信 ������ ���� ����
			life--;
			printf("�ش� ���ڴ� ���� ���� �ʽ��ϴ�. ���� ��ȸ�� %d�� �Դϴ�\n", life);
		}

		correct = 0;

		for (i = 0; i < 13; i++)
		{
			if ((word[i] == answer[i]))    // ��ǻ�Ͱ� �Է��� �ܾ�� ����ڰ� �Է��� �ܾ ������ Ȯ��
			{
				correct += 1;
			}
		}

		if (correct == 13)                 // 6���ȿ� ���߸� ����
		{
			printf("\n\n����\n\n");
			break;
		}
		else if (life == 0)                //6���ȿ� �����߸� ����
		{
			printf("\n����\n������ ");
			for (i = 0; i < 13; i++)
			{
				printf("%c", word[i]);
			}
			printf("��!!\n\n");
			break;
		}
	}
}