#include <stdio.h>
/*
	������ ���� ����϶�
	*
	**
	***
	****
	*****
	****
	***
	**
	*
*/
void main()
{
	//������� Ȯ�� - 2��
	int line;         //�ٹٲ� ���� ����,����,����
	int star;         //"*"����� ���� ����,����,����
	//������
	for (line = 0; line <= 8; line++)
	{
		if (line < 5)
		{
			for (star = 0; star <= line; star++)
			{
				printf("*");
			}

			printf("\n");
			continue;
		}

		else
		{
			for (star = 9; star > line; star--)
			{
				printf("*");
			}

			printf("\n");
		}
	}
}