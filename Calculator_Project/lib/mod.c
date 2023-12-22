#include <stdio.h>

int mod(int x, int y)
{
	if(y == 0)
	{
		printf("ERROR, Try to divide by zero");
		return -1;
	}
	else
	{
		return x%y;
	}
}
