#include <stdio.h>
/*
	90 �̻� "A"
	80 �̻� "B"
	70 �̻� "C" --
                 | --> ����� �ڰ��� �ֽ��ϴ�.
	60 �̻� "D" --
	60 �̸� "F"
	����� "�����ϼ̽��ϴ�"
*/
void main()
{
	//������� Ȯ�� - 1��
	int score;//����/����/����
	//������
	scanf("%d", &score);
	if (score >= 90)
	{
		printf("A");

	}
	else if (score >= 80)
	{
		printf("B");

	}
	else if (score >= 70)
	{
		printf("C ����� �ڰ��� �ֽ��ϴ�.");

	}
	else if (score >= 60)
	{
		printf("D ����� �ڰ��� �ֽ��ϴ�.");

	}
	else
	{
		printf("F");

	}
	printf("�����ϼ̽��ϴ�");

}