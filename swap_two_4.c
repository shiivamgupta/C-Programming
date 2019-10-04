#include<stdio.h>

int swap1(int,int);
int swap2(int*,int*);

int main(){
	int a,b,e,f;
	int *p,*q;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
	swap1(a,b);
	printf("enter the value of e = ");
	scanf("%d",&e);
	printf("enter the value of f = ");
	scanf("%d",&f);
	p=&e;q=&f;
	printf("address of e before swap  = %d\n",p);
	printf("address of f before swap  = %d\n",q);
	swap2(p,q);
	printf("value of e by ref = %d\n",*p);
	printf("value of f by ref = %d\n",*q);
	printf("address of e by ref = %d\n",p);
	printf("address of f by ref = %d\n",q);

}

int swap1(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("value of a by value in swap 1= %d\n",a);
	printf("value of b by value in swap 1= %d\n",b);
	return 0;
}

int swap2(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	return 1;
}
