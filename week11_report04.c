#include <stdio.h>
/*
	배열을 10개 만들어서 각 방에다가 숫자 10개를 지정하고 새로운 값을 입력 받아서 동일한 값이 있으면 index 번호를 출력하고 없으면 -1을 출력하기
	1. 배열을 10개를 만들어서 각 방에다가 숫자 10개를 지정한다.
	※ 이때, 각 방의 숫자는 오름차순 or 내림차순으로 지정한다.※

	2. 변수를 하나 더 선언해서 새로운 숫자를 입력받는다.

	3. 입력받은 숫자와 동일한 값이 있다면 index 번호를 출력한다.

	3-1. 입력받은 숫자와 동일한 값이 없다면 -1을 출력한다.
*/
void main()
{
	//저장공간 확보 - 14개
	int scr[10];      // 숫자 넣을 공간,숫자,정수
	int max;          // scr[] 인덱스의 최댓값,숫자,정수
	int min;          // scr[] 인덱스의 최솟값,숫자,정수
	int avg;          // scr[] 인덱스의 평균값,숫자,정수
	int k;            // 새로 입력 받을 값,숫자,정수
	//값지정
	scr[0] = 100;
	scr[1] = 90;
	scr[2] = 80;
	scr[3] = 70;
	scr[4] = 60;
	scr[5] = 50;
	scr[6] = 40;
	scr[7] = 30;
	scr[8] = 20;
	scr[9] = 10;

	k = 100;

	max = 9;
	min = 0;

	for (avg = (min + max) / 2;; avg = (min + max) / 2)
	{
		if (k == scr[avg])
		{
			printf("%d ", avg);
			break;
		}
		else if (k < scr[avg])
		{
			min = avg;

			if (avg == 8)
			{
				max = 10;
			}
		}
		else{
			max = avg;

			if (avg == 1)
			{
				max = 0;
			}
		}

		if ((max - min == 1) || (avg == 0))
		{
			printf("-1 ");
			break;
		}
	}
}