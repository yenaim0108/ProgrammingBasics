#include <stdio.h>
/*
	RE : 대문자 알파벳을 넣었을때 그에 상응하는 소문자 알파벳이 나오도록 프로그램 짜기(어떤 알파벳을 넣어도 성립하도록!)
	ex) A-->a, G-->g, T-->t 등....
*/
void main()
{
	//저장공간 확보 - 3개
	char biga;//알파벳 A의 저장공간/문자
	char smalla;//알파벡 a의 저장공간/문자
	int value;//A-a의 값/숫자/정수
	//값지정
	biga = 'A';
	smalla = 'a';
	value = biga - smalla;//조사식을 통해 A-a의 값이 -32라는 것을 알아냈다.

	//저장공간 확보 - 1개
	char alphabet;//대문자 알파벳의 저장공간+대문자에서 소문자로 변환했을 떄 소문자의 저장공간/문자
	//값지정
	scanf("%c", &alphabet);
	alphabet = alphabet + 32;
	printf("%c", alphabet);
}