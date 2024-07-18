#include<stdio.h>
#include<conio.h>
void main()
{
	float r,area;
	const float pi =3.14;
	printf("enter redius of circle:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("area of circle:%f",area);
}