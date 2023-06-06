#include <stdio.h>
int main()
{
	int num,sum=0,rev=0,i,digit;
	printf("\n Enter a number: ");
	scanf("%d",&num);
	for(i=0;num!=0;i++)
	{
		digit=num%10;
		sum=sum+digit;
		rev=digit+rev*10;
		num=num/10;
	}
	printf("\n Sum of digits= %d",sum);
	printf("\n Reverse of the number is %d",rev);
	return 0;
}
