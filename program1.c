#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two values\n");
	scanf("%d\n%d",&a,&b);
	printf("the addition of the two numbers %d and %d is %d\n",a,b,a+b);
	printf("the substraction of the two numbers %d and %d is %d\n",a,b,a-b);
	printf("the multiplication of the two numbers %d and %d is %d\n",a,b,a*b);
	printf("the division of the two numbers %d and %d is %d\n",a,b,a/b);
	printf("the modulus of the two numbers %d and %d is %d\n",a,b,a%b);
	return 0;
}

