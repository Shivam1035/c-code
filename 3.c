//Write a program in c to check a given number is even or odd using unction.
#include<stdio.h>
	int sk(int a)
	{
		if((a % 2)!=0)
		{
			printf("This is odd number:");
		}
		else
		{
			printf("This is even number:");
		}
	}
	int main()
	{
		int x;
		printf("Enter your number:");
		scanf("%d",&x);
		sk(x);
		return 0;
	}
