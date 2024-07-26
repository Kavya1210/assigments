#include<stdio.h>//heder file
int main()
{
	int numbers[5];
	int i;
	printf("enter 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&numbers[i]);
	}
	
	printf("the numbers you entered are:\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",numbers[i]);
	}
	return 0;
}
