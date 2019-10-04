#include<stdio.h>

int gcd(int, int);
int biggest(int, int);

int main() {
	
	int a,b,c;

	printf("enter the two numbers: ");
	scanf("%d%d",&a,&b);

	c=biggest(a,b);
	
	printf("GCD=%d\n",c);
}

int gcd(int a , int b) {
	int c;
		c=a%b;
		a=b;
		b=c;	

  if (!b) {
	return a;
  } else {
	a=gcd(a,b);
  }
/*

	while(b) {
		c=a%b;
		a=b;
		b=c;
	}

	return a;
*/
}

int biggest(int a , int b) {
	
	int f,i;

	if(a<b) {
		i=a;
		a=b;
		b=i;
	}

	f=gcd(a,b);

	return f;
}	
