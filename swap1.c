#include<stdio.h>
void main()
{
	int a,b;
	printf("The values to be swap\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The values after swap is %d\n %d\n",a,b);
}
