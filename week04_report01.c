#include <stdio.h>
/*
	90 �̻� "A"
	80 �̻� "B"
	70 �̻� "C"
	60 �̻� "D"
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
		printf("C");

	}
	else if (score >= 60)
	{
		printf("D");

	}
	else
	{
		printf("F");

	}
	printf("�����ϼ̽��ϴ�");

}