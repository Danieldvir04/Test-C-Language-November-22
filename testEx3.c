#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int Add222(int num);
void rec(int a);

void main_3()
{
	//Add222(1);
	rec(3);
}

int Add222(int num)
{
	printf("%d\n", num);
	return (num == 100 ? NULL : Add222(num + 1));
}

void rec(int a)
{
	if (a==NULL)
	{
		return ;
	}
	rec(a - 1);
	printf("%d\n", a);
}