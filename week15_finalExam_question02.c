#include <stdio.h>
/*
	������ ���⸦ �ϼ��϶�
	���ڿ� ������ �׸��� �ٽ� ���ڸ� �Է� �޾Ƽ� �̵��� ��� ����� �������
	��) 3 + 4 =
	�� Ű����� �Է��ϸ� 7 �� ����ϸ� �ȴ�.
	����� scanf("%c". &ch); �� ����Ű�� �����̽�Ű Ȥ�� �� Ű�� �ԷµǱ� �������� �־��� ������ �����Ѵ�.
	���� ������ ó�� scanf ������ fflush �� �������
*/
void main()
{
	int num, num_2, sum;
	char plus, result;

	printf("����������� �Է��ϰ� ���͸� ��������\nex)3 + 4 =\n\n");

	scanf("%d", &num);
	fflush(stdin);
	scanf("%c", &plus);
	fflush(stdin);
	scanf("%d", &num_2);
	fflush(stdin);
	scanf("%c", &result);

	sum = num + num_2;
	printf("%d ", sum);
}