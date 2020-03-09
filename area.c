#include<stdio.h>
#define phi 3.142
int main()
{
        float a,b,c,d,e,f,g,h,i,k;
	printf("Enter the length and breadth of the rectangle\n");
	scanf("%f%f",&a,&b);	
	printf("Enter the radius of circle\n");
	scanf("%f",&c);
	printf("Enter the height and base of triangle\n");
	scanf("%f%f",&d,&e);
	printf("Enter the side of square\n");
	scanf("%f",&f);
	g=a*b;
	h=phi*c*c;
	i=0.5*d*e;
	k=f*f;
	printf("The area of reactangle=%f\n triangle=%f\n circle=%f\n square=%f\n",g,i,h,k);

}
		
	
