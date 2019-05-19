#include <stdio.h>
/*
	두개의 문자 (대소문자 구분 없이) 를 입력 받고, 이후에 입력된 문자가 앞에 입력된 두 문자 사이에 존재하는지 아닌지를 출력한다.
	예) 'A' 와 'c' 를 입력 받은 후 'B' 를 입력 받으면, "문자 B는 문자 A와 C 사이에 존재합니다" 라고 출력하자
	주) 출력 형태는 달라져도 상관 없습니다
*/
void main()
{
	char alph[3];
	int i, diff = 'A' - 'a';

	printf("알파벳을 3개 입력하세요\n");
	scanf("%c", &alph[0]);
	fflush(stdin);
	scanf("%c", &alph[1]);
	fflush(stdin);
	scanf("%c", &alph[2]);

	for (i = 0; i < 3; i++)                       // 전부 대문자로 바꿔주기
	{
		if ((alph[i] >= 'a') && (alph[i] <= 'z'))
		{
			alph[i] += diff;
		}
	}

	if ((alph[2] > alph[0]) && (alph[2] < alph[1]))
	{
		printf("문자 %c는 문자 %c와 %c 사이에 존재합니다 ", alph[2], alph[0], alph[1]);
	}
	else{
		printf("문자 %c는 문자 %c와 %c 사이에 존재하지 않습니다 ", alph[2], alph[0], alph[1]);
	}
}