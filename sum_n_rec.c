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
	if(n==0)
	{
	return 0;
	}else{
	a=sum(n-1)+n;
	return a;
	}

}
