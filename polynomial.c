#include<stdio.h>
int power(int , int );
int main()
{
int i,x,n,sum=0;
	printf("enter the value of number of polynomial you wish to evaluate, x =");
	scanf("%d",&x);
	printf("enter the value of degree of polynomial you wish to evaluate, n =");
	scanf("%d",&n);
int a[n];
for (i=0;i<n+1;i++)
        {
        printf("enter num=");
        scanf("%d",&a[i]);
        //printf("address=%u\n",(a+i));
        
	sum=sum + (a[i] * power(x,n-i));
	}
 printf("sum = %d\n", sum);
}

int power (int num,int p){
        int i,a=1;
        for (i=0; i<p; i++){

                a=a*num;

        }
        return a;
}

