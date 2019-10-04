#include<stdio.h>

int main()
{
int i,j,a;

	printf("enter the number which you want to test=");
	scanf("%d",&i);

	a=i/2;
	for (j=2; j<=a; j++) {
		if(i%2==0)
		{
			printf("number is not prime\n");
			return 0;
		}

	}

	printf("number is prime\n");
	return 0;

	}




