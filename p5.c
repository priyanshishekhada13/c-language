#include<stdio.h>
#include<conio.h>
void main()
{
	float r,area;
	const float pi=3.14;
	printf("enter the redius of circle:");
	scanf("%f",&r);
    area=2*pi*r;
	printf("find the perimeter of the circle:%f",area);
}