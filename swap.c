#include<stdio.h>

int main(){
	int a, b,temp;
	printf("enter a=");
	scanf("%d", &a);
	printf("enter b=");
	scanf("%d",&b);
/*
	temp=a;
	a=b;
	b=temp;
*/
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d\n",a,b);
	return 0;
}

