#include <stdio.h>
#include "calculator.h"

int main (void)
{
	int x,y;
	
	printf("Enter x and y: ");
	scanf("%d%d",&x,&y);
	
	printf("\nx + y = %d",add(x,y));
	printf("\nx - y = %d",sub(x,y));
	printf("\nx * y = %d",mul(x,y));
	printf("\nx / y = %d",div(x,y));
	printf("\nx % y = %d\n",mod(x,y));
	
	return 0;
}
