#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two values to swap\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped values are %d and %d",a,b);
	return 0;
	
}
