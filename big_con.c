#include<stdio.h>

void main(){
	int a,b,c;
	printf("enter three numbers = ");
	scanf("%d %d %d", &a,&b,&c);
	a= a>=b?a:b;
	a>=c? printf("biggest number=%d\n",a):printf("biggest number=%d\n",c);

}
