#include <stdio.h>
/*
	�빮�� --> �ҹ��ڷ� ���
	�ҹ��� --> �״�� ���
*/
void main()
{
	//������� Ȯ�� - 2��
	int difference;//A-a�� ��/����/����
	char alphabet;//�빮�ڿ� �ҹ����� �������/����
	//������
	difference = 'A' - 'a';//����ؼ� -32��� ���� �˾Ƴ�
	scanf("%c", &alphabet);
	if (alphabet >= 'A'&&alphabet <= 'Z')
	{
		alphabet = alphabet + 32;
		printf("%c", alphabet);

	}
	else
	{
		printf("%c", alphabet);

	}

}