#include <stdio.h>
/*
�迭�� 10�� ���� �� �濡�ٰ� ���� 10���� �����ϰ� 10���� �濡 ū �������� �����ǵ��� �ڸ��� �ٲٱ�
*/
// tmp Ȯ�� O + if�� ������
void main()
{
	//������� Ȯ�� - 14��
	int scr[10];      // ���� ���� ����,����,����
	int i;            // scr[]�� �ε��� ��,����,����
	int k;            // ���� ������ ����,����,����
	int cp_k;         // k�� ���� ��,����,����
	int max;          // �ְ� ������ index ��ȣ,����,����
	int tmp;          // �ӽ��������Ȯ��,����,����
	//������
	scr[0] = 45;
	scr[1] = 5;
	scr[2] = 6;
	scr[3] = 87;
	scr[4] = 89;
	scr[5] = 62;
	scr[6] = 100;
	scr[7] = 46;
	scr[8] = 56;
	scr[9] = 92;

	for (k = 0; k < 9; k++)
	{
		cp_k = scr[k];
		max = k;

		for (i = k + 1; i < 10; i++)
		{
			if (cp_k < scr[i])
			{
				cp_k = scr[i];
				max = i;
			}
		}

		tmp = scr[k];
		scr[k] = scr[max];
		scr[max] = tmp;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", scr[i]);
	}
}