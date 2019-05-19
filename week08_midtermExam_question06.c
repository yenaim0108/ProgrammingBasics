#include <stdio.h>
/*
	"알파벳 문자" 두개를 입력 받는다.
	이 두 문자 사이에 들어갈 수 있는 모든 문자를 출력하는 프로그램을 완성하라.
	만약 하나는 대문자이고 하나는 소문자이면,
	처음에 입력된 문자가 대문자이면 뒤에 문자도 대문자로 변환해서 수행하고
	처음 문자가 소문자이면 뒤에 입력된 문자도 소문자로 변환해서 수행하라.
	(순서도 제출)
*/
void main()
{
	//저장공간 확보 - 4개
	char one;         // 알파벳 입력 저장공간,문자
	char other;       // 알파벳 입력 저장공간,문자
	char between;     // 두 알파벳 사이에 들어 갈 수 있는 모든 문자의 저장공간,문자 
	int diff = 'A' - 'a';         // 대문자 알파벳과 소문자 알파벳 사이의 아스키코드 값 차이,숫자,정수
	//값지정
	printf("첫 번째 알파벳 문자 입력 : ");
	scanf("%c", &one);
	fflush(stdin);
	printf("\n두 번째 알파벳 문자 입력 : ");
	scanf("%c", &other);
	printf("\n");

	if ((one >= 'A' && one <= 'Z') && (other >= 'a' && other <= 'z'))
	{
		other = other + diff;
	}
	else if ((one >= 'a' && one <= 'z') && (other >= 'A' && other <= 'Z'))
	{
		other = other - diff;
	}

	if (one <= other)
	{
		for (between = one + 1; between <= other - 1; between++)
		{
			printf("%c ", between);
		}
	}
	else
	{
		for (between = other + 1; between <= one - 1; between++)
		{
			printf("%c ", between);
		}
	}
}