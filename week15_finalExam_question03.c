#include <stdio.h>
/*
	�ΰ��� ���� (��ҹ��� ���� ����) �� �Է� �ް�, ���Ŀ� �Էµ� ���ڰ� �տ� �Էµ� �� ���� ���̿� �����ϴ��� �ƴ����� ����Ѵ�.
	��) 'A' �� 'c' �� �Է� ���� �� 'B' �� �Է� ������, "���� B�� ���� A�� C ���̿� �����մϴ�" ��� �������
	��) ��� ���´� �޶����� ��� �����ϴ�
*/
void main()
{
	char alph[3];
	int i, diff = 'A' - 'a';

	printf("���ĺ��� 3�� �Է��ϼ���\n");
	scanf("%c", &alph[0]);
	fflush(stdin);
	scanf("%c", &alph[1]);
	fflush(stdin);
	scanf("%c", &alph[2]);

	for (i = 0; i < 3; i++)                       // ���� �빮�ڷ� �ٲ��ֱ�
	{
		if ((alph[i] >= 'a') && (alph[i] <= 'z'))
		{
			alph[i] += diff;
		}
	}

	if ((alph[2] > alph[0]) && (alph[2] < alph[1]))
	{
		printf("���� %c�� ���� %c�� %c ���̿� �����մϴ� ", alph[2], alph[0], alph[1]);
	}
	else{
		printf("���� %c�� ���� %c�� %c ���̿� �������� �ʽ��ϴ� ", alph[2], alph[0], alph[1]);
	}
}