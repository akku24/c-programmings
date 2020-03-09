#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter the values to be swaped\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("Values before the swap is: %d\n %d\n \n",b,a);
	printf("Values after the swap is: %d\n %d\n \n",a,b);

}

	
	
