#include <stdio.h>
/*
	1���� 100���� Ȧ���� ���ϱ�
*/
void main()
{
	//��������
	int i;//Ȧ���� ��/����/����
	int sum = 0;//1���� 100���� Ȧ���� ���� ��/����/����
	for (i = 1; i <= 99; i = i + 2)
	{
		sum = sum + i;

	}
	printf("%d", sum);

}