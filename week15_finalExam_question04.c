#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	문자를 무작위로 100개를 받아 배열에 저장한다. 그리고 입력 받은각 문자별 갯수를 출력하라.
	예) 열개인 경우로 예를 들어보면 
	abedsaacbg 를 입력 하면, 이를 배열에 저장하고
	a 는 3개
	b 는 2개
	c 는 1개
	e 는 1개
	d 는 1개
	s 는 1개
	g 는 1개
	총 10개 입니다 
	라는 식으로 출력한다. 
	주) 출력의 모양은 달라져도 상관 없습니다
*/
void main()
{
	char ch[100], alph[27], start = 'a';
	int amount[26], i, k, sum = 0;

	for (i = 0; i < 26; i++)
	{
		alph[i] = start + i;
		amount[i] = 0;
	}

	srand(time(NULL));
	for (i = 0; i < 100; i++)       // 소문자 알파벳을 무작위로 100개 입력 받기
	{
		ch[i] = alph[rand() % 26];
	}

	for (i = 0; i < 100; i++)
	{
		for (k = 0; k < 26; k++)
		{
			if (ch[i] == alph[k])
			{
				amount[k]++;
			}
		}
	}

	for (i = 0; i < 26; i++)
	{
		printf("%c 는 %d개\n", alph[i], amount[i]);

		sum += amount[i];
	}

	printf("총 %d개 입니다\n", sum);
}