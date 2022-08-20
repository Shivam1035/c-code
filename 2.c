//Write a program to print largest number using ternary operators.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter your 1st number:");
	scanf("%d",&a);
	printf("Enter your 2nd number:");
	scanf("%d",&b);
	printf("Enter your 3rd number:");
	scanf("%d",&c);
	int shivam=((a<b)?((b<c)?c:b):((a<c)?c:a));
	printf("%d",shivam);
	return 0;
}
