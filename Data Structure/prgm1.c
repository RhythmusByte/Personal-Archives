#include <stdio.h>

int main() 
{
	int arr[] = {1,2,3,4,5};
	int sum = 0;
	int i;
	
	for(i=0;i<sizeof(arr)/sizeof(arr[0]); i++)
	
	{
		sum += arr[i];
	}
	
	printf("The sum of all elements in the array is %d \n", sum);
	
	return 0;
	
}
