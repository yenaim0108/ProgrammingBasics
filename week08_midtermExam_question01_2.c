#include <stdio.h>
/*
	������ ���� ��� �ǵ��� �϶�
	**********
	 ********
	  ******
	   ****
	    **
*/
void main()
{
	//������� Ȯ�� - 4��
	int line;         // "\n"�� ����ϱ� ���� ������ �������,����,����
	int l_blank;      // �ﰢ���� ���� " "(����)�� ����ϱ� ���� ������ �������,����,����
	int star;         // "*"�� ����ϱ� ���� ������ �������,����,����
	int r_blank;      // �ﰢ���� ������ " "(����)�� ����ϱ� ���� ������ �������,����,����
	//������
	for (line = 0; line < 10; line = line + 2)
	{
		for (l_blank = line; l_blank > 0; l_blank = l_blank - 2)
		{
			printf(" ");
		}

		for (star = line; star < 10; star++)
		{
			printf("*");
		}

		for (r_blank = line; r_blank > 0; r_blank = r_blank - 2)
		{
			printf(" ");
		}

		printf("\n");
	}
}
