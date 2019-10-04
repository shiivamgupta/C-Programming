#include<stdio.h>

int sum_pro(int,int,int*,int*);

int main(){
	int a,b;
	int *p,*q;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
	p=&a;q=&b;
	sum_pro(a,b,p,q);
	printf("sum = %d\n",*p);
	printf("product = %d\n",*q);

}

int sum_pro(int a,int b,int *sum,int *pro){
	//int *s,*p;
	*sum=a+b;
	*pro=a*b;
	return 0;
}
