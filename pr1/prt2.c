#include<stdio.h>
#include<conio.h>

void main()
{
	int hra , da ,ta , discount ,t1 ;
	float total;
	printf("enter hra:");
	scanf("%d",&hra);
	printf("enter da:");
	scanf("%d",&da);
	printf("enter ta:");
	scanf("%d",&ta);
	printf("enter discount:");
	scanf("%d",&discount);
	
	t1=(hra+da+ta);
	total=t1-(t1*discount)/100;
	printf("total amount:%2f",total);
}
	
	
	
	

