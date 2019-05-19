#include <stdio.h>
/*
	대문자 --> 소문자로 출력
	소문자 --> 그대로 출력
*/
void main()
{
	//저장공간 확보 - 2개
	int difference;//A-a의 값/숫자/정수
	char alphabet;//대문자와 소문자의 저장공간/문자
	//값지정
	difference = 'A' - 'a';//출력해서 -32라는 값을 알아냄
	scanf("%c", &alphabet);
	if (alphabet >= 'A'&&alphabet <= 'Z')
	{
		alphabet = alphabet + 32;
		printf("%c", alphabet);

	}
	else
	{
		printf("%c", alphabet);

	}

}