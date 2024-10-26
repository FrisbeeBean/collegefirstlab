#include<stdio.h>
int main()
{
	float length;
	printf("Enter the length\n");
	scanf("%f",&length);
	printf("The length in metres is %f\nThe length in centimetres is %f\nThe length in millimetres is %f",length*1000,length*100000,length*1000000);
	return 0;
}
