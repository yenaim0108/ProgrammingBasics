#include <stdio.h>
/*
	�迭�� 10�� ���� �� �濡�ٰ� ���� 10���� �����ϰ� 10���� �濡 ū �������� �����ǵ��� �ڸ��� �ٲٱ�
*/
// tmp Ȯ�� X + if�� ���
void main()
{
	//������� Ȯ�� - 14��
	int scr[10];      // ���� ���� ����,����,����
	int i;            // scr[]�� �ε��� ��,����,����
	int k;            // ���� ������ ����,����,����
	int cp_k;         // k�� ���� ��,����,����
	int max;          // �ְ� ������ index ��ȣ,����,����
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
		cp_k = k;
		k = scr[k];

		for (i = cp_k; i < 10; i++)
		{
			if (k <= scr[i])
			{
				k = scr[i];
				max = i;
			}
		}

		if (cp_k != max)                         // ���� ���ϴ� ���� ������ ���� �ְų� ū ���� ���� ���� ���ؼ�...
		{
			scr[cp_k] += scr[max];
			scr[max] = scr[cp_k] - scr[max];
			scr[cp_k] -= scr[max];
		}

		k = cp_k;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", scr[i]);
	}
}