#include <stdio.h>
/*
	1~100���� 369����(3�� ��� or 3,6,9�� �� ���ڴ� ��� "¦"���� ���!! �������� ���ڷ� ���!!)
*/
void main()
{
	//��������
	int i;//369���� ����,����,����
	//������

	for (i = 1; i <= 100; i++)
	{
		if (i % 3)
		{
			if ((i % 10) % 3)
			{
				if ((i / 10) % 3)
				{
					printf("%d", i);
				}
				else if (i / 10 == 0)
				{
					printf("%d", i);
				}
				else
				{
					printf("¦");
				}
			}

			else if (i % 10 == 0)
			{
				printf("%d", i);
			}
			else
			{
				printf("¦");
			}
		}
		else
		{
			printf("¦");
		}

	}
}