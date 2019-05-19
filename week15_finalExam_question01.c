#include <stdio.h>
/*
	키보드로 부터 문자를 반복적으로 입력 받는다.
	이때, 한 문자가 5번 반복이 되면, 프로그램을 종료하도록 한다.
	주) scanf 전에는 반드시 fflush를 사용하도록 하자
	예) char ch;
	fflush(stdin);
	scanf("%c", &ch);
	주) 무한 반복하는 반복구문을 만들고자 하면
	for(;;)
	{
	}
	처럼 만들면 된다.
*/
void main()
{
	char ch, str[100];
	int i, k = 0, eq;

	for (;;)
	{
		fflush(stdin);
		scanf("%c", &ch);

		str[k] = ch;
		k++;
		eq = 0;

		for (i = 0; i < 100; i++)
		{
			if (ch == str[i])
			{
				eq++;
			}
		}

		if (eq == 5)
		{
			printf("\n%c가 5번 반복 입력되었습니다", ch);
			break;
		}
		else{
			continue;
		}
	}
}