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


int count_ones=0;
int ones(int a){

	int n;

	if (a==0){
		return 0;
	}
	
	n=a%10;
	if (n==1) {
		count_ones++;
	}
	a=a/10;
	ones(a);
	return count_ones;


}

int count_zeros=0;
int zeros(int a){

	int n;

	if (a==0){
		return 0;
	}
	
	n=a%10;
	if (n==0) {
		count_zeros++;
	}
	a=a/10;
	zeros(a);
	return count_zeros;
}
