#include<stdio.h>
void main()
{
	int rev=0,temp,digit,n;
	printf("Enter an integer number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;	
	}

	printf("Given number is %d\n:",temp);
	printf("Its reverse is :%d\n",rev);
	if(rev==temp)
	
		
		printf("The number is pallindrome");
		
		else
		
		printf("The number is not pallindrome");
		
	
}

