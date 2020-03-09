#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2;    // dec of variable
	float result=0;  
	char ch;
	printf("choose the operator (+,-,*,/,%)\n");
	scanf("%c",&ch);
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
	{
	printf("Enter the values of numbers on which operations to be done :");
	scanf("%d %d",&n1,&n2);
	
	switch(ch)
	{
		case'+':result=n1+n2;
			printf("result: %d%c%d=%f\n",n1,ch,n2,result);
			break;
		case'-':result=n1-n2;
			printf("result: %d%c%d=%f\n",n1,ch,n2,result);
			break;
		case'*':result=n1*n2;
			printf("result: %d%c%d=%f\n",n1,ch,n2,result);
			break;
		case'/':
		if (n2==0)
		{
			printf("Mathematical Error");
			break;
		}
		else
		{
			result=(float)n1/(float)n2;
			printf("result: %d%c%d=%f\n",n1,ch,n2,result);
			break;
		}                
		case'%':result=n1%n2;
			printf("result: %d%c%d=%f\n",n1,ch,n2,result);
			break;
                default:printf("Inavlid operation");
			exit(0);
	}
	}
	else
	{
		printf("Inavlid operation");
		exit(0); 
	}
		
		
	
	
}
