#include <stdio.h>
#include <math.h>
int main()
{
	 int choice;
	 float num1,num2,root;
do
{
	printf("\n1:square root\n2:square\n3:power\n4:mod\n5:Percentage\n:6:Sine value\n7:log(base 10)\n8:log(base e)\nEnter choice: ");
	scanf("%d",&choice);
	printf("\n Number= ");
	scanf("%f",&num1);
	switch(choice)
	{
		case 1:
				root=sqrt(num1);
				printf("\nSquare root of %f = %f",num1,root);
				break;
		case 2:
				printf("\n Square of %f = %f",num1,num1*num1);
				break;
		case 3:
			    printf("\n Raised value= ");
			    scanf("%f",&num2);
				printf("\n Power of (%f,%f)=%f",num1,num2,pow(num1,num2));
				break;
		case 4:
				
				if(num1<0)
				{
					num2=-num1;
				}	
				printf("\n Modulus of %f= %f",num1,num2);
				break;
		case 5:
				printf("\nTotal =");
				scanf("%f",&num2);
				printf("\n Percentage= %f",(num1*100)/num2);
				break;
		case 6:
				printf("\n Sin(%f)=%f",num1,sin(num1));
				break;
				
		case 7:
				printf("\n log(%f)=%f",num1,log(num1));
				break;	
		}

}while(choice>=1 || choice<=8);			
return 0;
}
