#include<stdio.h>
int power(int , int );

int main(){
	int n,p,i;
	printf("enter the number = ");
	scanf("%d", &n);
	printf("enter the power = ");
	scanf("%d", &p);
	i=power(n,p);
	printf("Result = %d\n", i);
}

int power (int num,int p){
        int i,a=1;
	if (p==0){
	return 1;
	}else
	{
	a= num*power(num ,--p);
	}
 	/* for (i=0; i<p; i++){

                a=a*num;

        }*/
        return a;
}

