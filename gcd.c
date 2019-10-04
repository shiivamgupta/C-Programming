#include<stdio.h>

int gcd(int, int);

int main() {
	
	int a,b,c,i;

	printf("enter the two numbers: ");
	scanf("%d%d",&a,&b);

	c=gcd(a,b);

	printf("GCD=%d\n",c);
}

int gcd(int a , int b) {
	int c,i;

	if(a<b) {
		i=a;
		a=b;
		b=i;
	}

	while(b) {
		c=a%b;
		a=b;
		b=c;
	}

	return a;

}
