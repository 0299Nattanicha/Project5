#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char a;
	scanf("%c", &a);
	if (a <= 90)
	{
		printf("%c", a + 32);
	}
	else
	{
		printf("%c", a - 32);
	}
	return 0;
}