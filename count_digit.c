#include<stdio.h>

int digit(int );

int main() {
	int a,o,z;

	printf("enter the number = \n");

	scanf("%d",&a);

	o=digit(a);
	printf("number of digitd=%d\n",o);

}


int digit(int a){

	int count=0,n;

	while(a){
		n=a%10;
		count++;
		a=a/10;
	}
	return count;
}
