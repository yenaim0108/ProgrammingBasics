#include <stdio.h>
/*
	Ű����� ���� ���ڸ� �ݺ������� �Է� �޴´�.
	�̶�, �� ���ڰ� 5�� �ݺ��� �Ǹ�, ���α׷��� �����ϵ��� �Ѵ�.
	��) scanf ������ �ݵ�� fflush�� ����ϵ��� ����
	��) char ch;
	fflush(stdin);
	scanf("%c", &ch);
	��) ���� �ݺ��ϴ� �ݺ������� ������� �ϸ�
	for(;;)
	{
	}
	ó�� ����� �ȴ�.
*/
void main()
{
	char ch, str[100];
	int i, k = 0, eq;

	for (;;)
	{
		fflush(stdin);
		scanf("%c", &ch);

		str[k] = ch;
		k++;
		eq = 0;

		for (i = 0; i < 100; i++)
		{
			if (ch == str[i])
			{
				eq++;
			}
		}

		if (eq == 5)
		{
			printf("\n%c�� 5�� �ݺ� �ԷµǾ����ϴ�", ch);
			break;
		}
		else{
			continue;
		}
	}
}