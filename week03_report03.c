#include <stdio.h>
/*
	RE : �� ���ĺ��� ������� �Է������� �� ���ĺ� ������ ������ ������ �������� ���α׷�¥��
	ex) A,C�Է�-->1 B,D�Է�-->0 K,S�Է�-->7
*/
void main()
{
	//������� Ȯ�� - 3��
	char one;//�� ���ĺ��� �������/����
	char other;//������ �� ���ĺ��� �������/����
	int the_number;//�� ���ĺ� ������ ���ĺ� ���� �������/����/����
	//������
	scanf("%c", &one);
	fflush(stdin);
	scanf("%c", &other);
	the_number = (other - one) - 1;
	printf("%d", the_number);
}