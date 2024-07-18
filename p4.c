#include<stdio.h>
#include<conio.h>
void main()
{
	int p ,r,n,interest;
	printf("enter the value of p:");
	scanf("%d",&p);
	printf("enter the value of r:");
	scanf("%d",&r);
	printf("enter the value of n:");
	scanf("%d",&n);
    interest=p*r*n/100;
	printf("find simple interest:%d",interest);
}