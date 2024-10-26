#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float per;
	printf("The marks of the student in the 5 subjects are\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	per=(a+b+c+d+e)/5;
	printf("The percentage of the student is %5.2f%%",per);
	return 0;
}
