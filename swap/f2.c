#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,ans;
	printf("enter x:");
	scanf("%d",&x);
	printf("enter y:");
	scanf("%d",&y);
	ans=(x*x)-(2*x*y)+(y*y);
	printf("ans=%d",ans); 
}