#include <stdio.h>
int main()
{
	int num,pos=0,neg=0,zero=0,i,limit;
	printf("\n Enter the limit of numbers: ");
	scanf("%d",&limit);
	printf("\nEnter numbers: ");
	i=1;
	while(limit)
	{
	printf("\n Number %d=",i++);
	scanf("%d",&num);
	if(num>0)
	{
		pos++;
	}
	else if(num<0)
	{
		neg++;
	}
		else
	{
		zero++;
	}

	limit--;
	}
	printf("\n number of positives= %d",pos);
	 printf("\n number of negatives=%d",neg);
	printf("\n Number of zeros= %d",zero);
	
	return 0;
}
