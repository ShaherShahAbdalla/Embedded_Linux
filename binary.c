/* Description: Binary search program 	*/

/* Author: Shaher Shah Abdalla Kamal	*/

/* Date: 1-12-2023			*/

int binarySearch (int *, int n, int target);


#include <stdio.h>

int main (void)
{
	int arr[9] = {-4,-3,-2,-1,0,1,2,3,4};
	int target, index;
	printf("Enter what you need to find in the array: ");
	scanf("%d",&target);
	index = binarySearch(arr,9,target);
	if (index == -1)
	{
		printf("It is not found in the array :(\n");
	}
	else
	{
		printf("It is found in index %d :)\n",index);
	}
	return 0;
}

int binarySearch (int *ptr, int n, int target)
{
	int counter, index = -1;
	for(counter = 0; counter < n; counter++)
	{
		if (ptr[counter] == target)
		{
			index = counter;
			break;
		}
	}
	return index;
}	
