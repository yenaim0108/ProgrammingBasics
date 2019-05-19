#include <stdio.h>
/*
	간단한 계산기를 완성하라
	숫자와 연산자 그리고 다시 숫자를 입력 받아서 이들의 계산 결과를 출력하자
	예) 3 + 4 =
	을 키보드로 입력하면 7 을 출력하면 된다.
	참고로 scanf("%c". &ch); 는 엔터키나 스페이스키 혹은 탭 키가 입력되기 전까지를 주어진 변수에 저장한다.
	또한 위에서 처럼 scanf 전에는 fflush 를 사용하자
*/
void main()
{
	int num, num_2, sum;
	char plus, result;

	printf("덧셈연산식을 입력하고 엔터를 누르세요\nex)3 + 4 =\n\n");

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