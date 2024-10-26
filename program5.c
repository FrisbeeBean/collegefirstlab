#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Enter the two values to swap\n");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("The swapped values are %d and %d",a,b);
	return 0;
	
}
