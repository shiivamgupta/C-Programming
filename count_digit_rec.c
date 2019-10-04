#include<stdio.h>

int digit(int );

int main() {
	int a,o;

	printf("enter the number=\n");

	scanf("%d",&a);

	o=digit(a);
	printf("number of digits=%d\n",o);

}


int count=0;
int digit(int a){

	int n;

	if (a==0){
		return 0;
	}
	
	n=a%10;
	
		count++;
	
	a=a/10;
	digit(a);
	return count;


}
