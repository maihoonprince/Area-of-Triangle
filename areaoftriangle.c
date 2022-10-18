#include<math.h>
#include<stdio.h>
main()
{
	float a,b,c,s,area;
	printf("Enter the sides of Triangle\n");
	scanf("%f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Answer is %f\n",area);
}

