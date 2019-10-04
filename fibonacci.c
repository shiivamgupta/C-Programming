#include<stdio.h>

int fibonacci(int );

int main() {
	int n,i;

	printf("enter number of terms in fibonacci series:\n ");

	scanf("%d",&n);

	fibonacci(n);

}

int fibonacci(int n) {
	int a=0,i,b=1,c;

	for(i=0; i<=n; i++) {
		a=b;
		b=c;
		c=a+b;

		printf("\t%d",c);
	}

}
