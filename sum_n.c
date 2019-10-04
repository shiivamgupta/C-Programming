#include<stdio.h>

int sum(int);
int main(){

	int n,i;
	printf("n= ");
	scanf("%d",&n);
	i=sum(n);
       	  
	printf("sum=%d\n",i);


}

int sum(int n){
	int a;
	a=(n*(n+1))/2;
	return a;

}
