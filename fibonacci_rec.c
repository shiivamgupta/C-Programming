#include<stdio.h>

int fibonacci(int );

int main() {
	int n;

	printf("enter number of terms in fibonacci series:\n ");

	scanf("%d",&n);

	fibonacci(n);

}
int a=0,b=1,c=0;

int fibonacci(int n) {
//	int c;
	if (n==0) {
	return 0;
	} else {

		a=b;
		b=c;
		c=a+b;
		printf("\t%d",c);
		fibonacci(--n);
	}printf("\n");

}
