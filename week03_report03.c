#include <stdio.h>
/*
	RE : 두 알파벳을 순서대로 입력했을때 두 알파벳 사이의 문자의 개수가 나오도록 프로그램짜기
	ex) A,C입력-->1 B,D입력-->0 K,S입력-->7
*/
void main()
{
	//저장공간 확보 - 3개
	char one;//한 알파벳의 저장공간/문자
	char other;//나머지 한 알파벳의 저장공간/문자
	int the_number;//두 알파벳 사이의 알파벳 수의 저장공간/숫자/정수
	//값지정
	scanf("%c", &one);
	fflush(stdin);
	scanf("%c", &other);
	the_number = (other - one) - 1;
	printf("%d", the_number);
}