#include <stdio.h>
/*
	������ ���� ��� �ǵ��� �϶�
	**********
	          *********
	  ********
	          *******
	    ******
	          *****
	      ****
	          ***
	        **
	          *
*/
void main()
{
	//������� Ȯ�� - 5��
	int number;       // ¦��, Ȧ���� �����ϱ� ���� ����,����,����
	int odd_blank;    // Ȧ������ "*" �տ� " "(����) ����� ���� ������ �������,����,����
	int odd;          // Ȧ������ "*" ����� ���� ������ �������,����,����
	int even_blank;   // ¦������ "*" �տ� " "(����) ����� ���� ������ �������,����,����
	int even;         // ¦������ "*" ����� ���� ������ �������,����,����
	//������
	for (number = 10; number > 0; number--)
	{
		if (number % 2)
		{
			for (odd_blank = 1; odd_blank <= 10; odd_blank++)
			{
				printf(" ");
			}

			for (odd = number; odd > 0; odd--)
			{
				printf("*");
			}
		}
		else
		{
			for (even_blank = number; even_blank < 10; even_blank++)
			{
				printf(" ");
			}

			for (even = number; even > 0; even--)
			{
				printf("*");
			}
		}

		printf("\n");
	}
}