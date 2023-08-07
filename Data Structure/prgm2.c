#include <stdio.h>

int main() {
	int n;
	int arr[100];
	int sum=0;
	int i;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++)
	
	{
		printf("Enter the element at index %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	for (i=0; i<n; i++)
	{
		sum += arr[i];
	}
	
	printf("The sum of all elements in the array is %d \n",sum);
	
	return 0;
}
