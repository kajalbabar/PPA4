#include<stdio.h>

void main(){
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	
	if((year%4==0 && year%100 !=0) || (year%400==0) )
		printf("%d is a leap year\n\n",year);
	else
		printf("%d is normal year\n\n",year);
	
	
}
