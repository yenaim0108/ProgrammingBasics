#include <stdio.h>
/*
	배열을 이용하여 과목 5개의 점수를 임의로 지정하고 for문을 이용해서 과목들의 점수를 다 더한 값의 /5를 해서 평균을 구하기
	순서>

	1. 배열을 만든다

	2. 5개 과목의 점수를 임의로 지정한다

	3. for문을 사용하여 5개 과목 점수의 합을 구한다

	4. /5를 해서 5개 과목 성적의 평균을 구한다
*/
void main()
{
	//저장공간 확보 - 13개
	int sub[5];                // 배열을 이용해서 5개 과목의 점수를 넣을 방을 만들었다,숫자,정수
	int c_programming = 0, math = 1, english = 2, science = 3, java = 4; // 과목 5개의 점수를 넣을 방에 이름 지정,숫자,정수
	int room;                  // 각 과목들의 지정된 방번호(for문을 이용해서 각 과목들의 점수의 합을 구할 때 필요),숫자,정수
	int sum = 0;               // 5개 과목의 점수들의 합,숫자,정수
	int avg = 0;               // 5개 과목 성적의 평균,숫자,정수
	//값지정
	sub[c_programming] = 100;
	sub[math] = 45;
	sub[english] = 68;
	sub[science] = 34;
	sub[java] = 85;

	for (room = 0; room < 5; room++)
	{
		sum = sum + sub[room];
	}

	avg = sum / 5;

	printf("5개 과목 성적의 평균 : ");
	printf("%d ", avg);
}