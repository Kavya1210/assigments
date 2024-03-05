//que-3. WAP to take 10 no. Input from user find out below values
//          a. How many Even numbers are there
//          b. How many odd numbers are there
//          c. Sum of even numbers
//          d. Sum of odd numbers

#include<stdio.h>
int main()
{
	int value[10],i;
	printf("enter 10 value\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&value[i]);
		if(value[i]%2==0)
		{
			printf("%d is even",value[i]);
		}
		else
		{
			printf("%d is odd",value[i]);
		}
	}
	
	
	return 0;
}
