#include <stdio.h>
/*
	"���ĺ� ����" �ΰ��� �Է� �޴´�.
	�� �� ���� ���̿� �� �� �ִ� ��� ���ڸ� ����ϴ� ���α׷��� �ϼ��϶�.
	���� �ϳ��� �빮���̰� �ϳ��� �ҹ����̸�,
	ó���� �Էµ� ���ڰ� �빮���̸� �ڿ� ���ڵ� �빮�ڷ� ��ȯ�ؼ� �����ϰ�
	ó�� ���ڰ� �ҹ����̸� �ڿ� �Էµ� ���ڵ� �ҹ��ڷ� ��ȯ�ؼ� �����϶�.
	(������ ����)
*/
void main()
{
	//������� Ȯ�� - 4��
	char one;         // ���ĺ� �Է� �������,����
	char other;       // ���ĺ� �Է� �������,����
	char between;     // �� ���ĺ� ���̿� ��� �� �� �ִ� ��� ������ �������,���� 
	int diff = 'A' - 'a';         // �빮�� ���ĺ��� �ҹ��� ���ĺ� ������ �ƽ�Ű�ڵ� �� ����,����,����
	//������
	printf("ù ��° ���ĺ� ���� �Է� : ");
	scanf("%c", &one);
	fflush(stdin);
	printf("\n�� ��° ���ĺ� ���� �Է� : ");
	scanf("%c", &other);
	printf("\n");

	if ((one >= 'A' && one <= 'Z') && (other >= 'a' && other <= 'z'))
	{
		other = other + diff;
	}
	else if ((one >= 'a' && one <= 'z') && (other >= 'A' && other <= 'Z'))
	{
		other = other - diff;
	}

	if (one <= other)
	{
		for (between = one + 1; between <= other - 1; between++)
		{
			printf("%c ", between);
		}
	}
	else
	{
		for (between = other + 1; between <= one - 1; between++)
		{
			printf("%c ", between);
		}
	}
}