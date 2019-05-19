#include <stdio.h>
#include <stdlib.h> // rand(),srand()�� ����ϱ� ���ؼ�...
#include <time.h>   // time �Լ��� ����ϱ� ���ؼ�...
/*
	���ڷ� �ϴ� �߱� ������ �ϼ��� ����
	(���� �ð��� �ٷ� ���α׷��Դϴ�. �׶� ���� �帰 ������� �۵��ϰ� �ϸ� �˴ϴ�)
*/
void main()
{
	int random, arr[4], k, i, sq, eq;

	srand(time(NULL));  // seed �� ���

	for (eq = 0;;)                            // �Ʒ� for(int vs = 0; ; vs++)�� random�� ������ ������ ��� �ٲ� for(int vs = 0; ; vs++) �ۿ� ���� for���� �������
	{
		random = rand() % 10000;              // ��ǻ�Ͱ� ù��° ���� �Է�
		sq = 1000;

		for (i = 0; i < 4; i++)                // �迭�� �̿��ؼ� �� �ڸ��� �и�
		{
			arr[i] = random / sq % 10;

			sq = sq / 10;
		}

		for (k = 0; k < 3; k++)                // ��ǻ�Ͱ� �Է��� 4�ڸ��� �߿��� �ߺ��Ǵ� ���� �ִ��� Ȯ��
		{
			for (i = k + 1; i < 4; i++)
			{
				if (arr[k] == arr[i])
				{
					eq = 1;
				}
			}
		}

		if (eq)                               // ���ڰ� ��ø�Ǹ� ��ǻ�Ϳ��� �ٸ� ���ڸ� �޾ƿ���
		{
			eq = 0;
			continue;
		}
		else{
			break;
		}
	}

	int num;

	for (int vs = 0; vs < 7; vs++)             // �߱����� 7�� ������
	{
		printf("4�ڸ� ���� �Է� : ");
		scanf("%d", &num);

		int str[4];
		sq = 1000;
		eq = 0;

		for (i = 0; i < 4; i++)           // �迭�� �̿��ؼ� �� �ڸ��� �и�
		{
			str[i] = num / sq % 10;

			sq = sq / 10;
		}

		for (k = 0; k < 3; k++)           // ����ڰ� �Է��� 4�ڸ��� �߿��� �ߺ��Ǵ� ���� �ִ��� Ȯ��
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

		if (eq)                           // ���ڰ� ��ø�Ǹ� ��ǻ�Ϳ��� �ٸ� ���ڸ� �޾ƿ���
		{
			printf("���ڰ� ��ø���� �ʰ� ���� �ٽ� �Է� �ϼ���\n");
			continue;
		}
		else{                           // ���ڰ� ��ø���� ���� ��
			for (k = 0; k < 4; k++)
			{
				for (i = 0; i < 4; i++)
				{
					if (arr[k] == str[i])
					{
						if (k == i)       // ���ڰ� ������ �ڸ����� ������ strike
						{
							strike += 1;
						}
						else{           // ���ڰ� ������ �ڸ����� �ٸ��� ball
							ball += 1;
						}
					}
				}
			}

			printf("%d strike\n", strike);
			printf("%d ball\n ", ball);
		}

		if (random == num)               // ����ڰ� 7�� ���� ���߸� "You WIN!!" ���
		{
			printf("\nYou WIN!! ");
			break;
		}
		else if (vs == 6)                // ����ڰ� 7�� ���� �����߸� "�ٺ�!!" ���
		{
			printf("\n�ٺ�!!\n");
			printf("������ %d �̾�!! ", random);
			break;
		}
	}

}