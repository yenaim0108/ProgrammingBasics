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
	int line;         // �ٹٲ� ���� ����,����,����
	int star;         // "*"����� ���� ����,����,����
	//������
	for (line = 0; line < 5; line++)
	{
		for (star = 0; star <= line; star++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (line = 0; line < 4; line++)
	{
		for (star = line; star < 4; star++)
		{
			printf("*");
		}

		printf("\n");
	}

}