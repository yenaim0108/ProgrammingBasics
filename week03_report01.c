#include <stdio.h>
/*
	RE : ������ü�� ���Ǹ� ���Ͽ���(����, ����, ���̿� � ���ڸ� �־ �����ϵ���)
*/
void main()
{
	//������� Ȯ�� - 4��
	int width;//������ ��/����/����
	int depth;//������ ��/����/����
	int height;//������ ��/����/����
	int volume;//����*����*������ ��/����/����
	//������
	scanf("%d", &width);
	scanf("%d", &depth);
	scanf("%d", &height);
	volume = width*depth*height;
	printf("%d", volume);
}