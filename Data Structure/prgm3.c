#include <stdio.h>

int add_array(int *array, int size)
{
	int sum=0;
	for(int i=0; i<size; i++)
	{
		sum +=array[i];
	}
		return sum;
}

void a(char * array[], int size) {
	for(int i=0; i<size; i++)
	{
		if(array[i][0]=='a')
		{
			printf("%s \n",array[i]);
		}
	}
}

int palindrome(char *string) {
	int length = strlen(string);
	
	for(int i=0;i<length / 2; i++)
	
	{
		if(string[i]!=string[length-i-1])
		{
			return 0;
		}
	}
	
	return 1;
	
}

int main() {
	int array[]={1,2,3,4,5};
	int size=sizeof (array) / sizeof (array[0]);
	
	printf("The sum of the array is %d \n",add_array(array,size));
	
	char *strings[]={"Luffy","Zoro","Nami","Robin","Sanji"};
	size=sizeof(strings)/sizeof(strings[0]);
	
	a(strings,size);
	char *string="tenet";
	
	printf("The string %s is %s a palindrome \n",string,palindrome(string)?"" : "not");
	
	return 0;
	
}
