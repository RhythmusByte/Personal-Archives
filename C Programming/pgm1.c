#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,disc;
	float root1,root2,real,img;
	printf("\n Enter the coefficients a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	disc=(b*b)-(4*a*c);
	
	if (disc==0)
	{
		root1=-b/(2*a);
		printf("\n Equal roots, Root=%f",root1);
	}
	else if(disc>0)
	{
		root1=(-b+sqrt(disc))/(2*a);
		root2=(-b-sqrt(disc))/(2*a);
		printf("\n Root1=%f,Root2=%f",root1,root2);
	}
	else
	{
		real=-b/(2*a);
		img=(sqrt(-disc))/(2*a);
		printf("\n roots are imaginary");
		printf("\n Root1=%f+i%f, Root2=%f-i%f",real,img,real,img);
	}
	return 0;
}
