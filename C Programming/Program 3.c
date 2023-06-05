#include <stdio.h>
int main()
{
	int a,b,sum,n,i;
	printf("\n Enter the value of n: ");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d \t %d",a,b);
	for(i=3;i<=n;i++)
	{
		sum=a+b;
		printf("\t %d",sum);
		a=b;
		b=sum;
	}
	printf("\n %d th term of fibonacci setries is %d",n,sum);
	return 0;
}
