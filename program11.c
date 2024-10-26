#include<stdio.h>
#include<math.h>
int main()
{
	int p,t;
	float r,si,ci;
	printf("Enter the principal,rate of interest,time period\n");
	scanf("%d %f %d",&p,&r,&t);
	si=(p*r*t)/100;
	ci=p*(pow(1+r/100,t)-1);
	printf("The simple interest is %f\n",si);
	printf("The coumpund interest is %f",ci);
	return 0;
}
