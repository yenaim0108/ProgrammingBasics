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
		if (i % 3 == 0)
		{
			printf("¦");
			continue;
		}
		if (i % 10 == 0)
		{
			printf("%d", i);
			continue;
		}
		if (i % 10 % 3 == 0)
		{
			printf("¦");
			continue;
		}
		if (i / 10 == 0)
		{
			printf("%d", i);
			continue;
		}
		if (i / 10 % 3 == 0)
		{
			printf("¦");
			continue;
		}
		printf("%d", i);

	}
}