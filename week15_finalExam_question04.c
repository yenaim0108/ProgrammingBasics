#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	���ڸ� �������� 100���� �޾� �迭�� �����Ѵ�. �׸��� �Է� ������ ���ں� ������ ����϶�.
	��) ������ ���� ���� ���� 
	abedsaacbg �� �Է� �ϸ�, �̸� �迭�� �����ϰ�
	a �� 3��
	b �� 2��
	c �� 1��
	e �� 1��
	d �� 1��
	s �� 1��
	g �� 1��
	�� 10�� �Դϴ� 
	��� ������ ����Ѵ�. 
	��) ����� ����� �޶����� ��� �����ϴ�
*/
void main()
{
	char ch[100], alph[27], start = 'a';
	int amount[26], i, k, sum = 0;

	for (i = 0; i < 26; i++)
	{
		alph[i] = start + i;
		amount[i] = 0;
	}

	srand(time(NULL));
	for (i = 0; i < 100; i++)       // �ҹ��� ���ĺ��� �������� 100�� �Է� �ޱ�
	{
		ch[i] = alph[rand() % 26];
	}

	for (i = 0; i < 100; i++)
	{
		for (k = 0; k < 26; k++)
		{
			if (ch[i] == alph[k])
			{
				amount[k]++;
			}
		}
	}

	for (i = 0; i < 26; i++)
	{
		printf("%c �� %d��\n", alph[i], amount[i]);

		sum += amount[i];
	}

	printf("�� %d�� �Դϴ�\n", sum);
}