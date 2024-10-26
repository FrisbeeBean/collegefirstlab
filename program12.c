#include<stdio.h>
int main()
{
	int days,years;
	printf("Enter the number of days\n");
	scanf("%d",&days);
	years=days/365;
	printf("The number of years and remaining days are %d and %d",years,days-years*365);
	return 0;
}
