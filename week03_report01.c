#include <stdio.h>
/*
	RE : 직육면체의 부피를 구하여라(가로, 세로, 높이에 어떤 숫자를 넣어도 성립하도록)
*/
void main()
{
	//저장공간 확보 - 4개
	int width;//가로의 값/숫자/정수
	int depth;//세로의 값/숫자/정수
	int height;//높이의 값/숫자/정수
	int volume;//가로*세로*높이의 값/숫자/정수
	//값지정
	scanf("%d", &width);
	scanf("%d", &depth);
	scanf("%d", &height);
	volume = width*depth*height;
	printf("%d", volume);
}