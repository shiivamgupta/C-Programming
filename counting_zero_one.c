#include<stdio.h>

int ones(int );
int zeros(int );

int main() {
	int a,o,z;

	printf("enter the binary code\n");

	scanf("%d",&a);

	o=ones(a);
	z=zeros(a);
	printf("number of ones=%d\n",o);
	printf("number of zeros=%d\n",z);
}


int ones(int a){

	int count=0,n;

	while(a){
		n=a%10;
		if (n==1) {
			count++;
		}
		a=a/10;
	}
	return count;
}

int zeros(int a){

	int count=0,n;

	while(a){
		n=a%10;
		if (n==0) {
			count++;
		}
		a=a/10;
	}
	return count;
}
