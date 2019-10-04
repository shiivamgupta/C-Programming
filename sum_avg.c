#include<stdio.h>
int sum(int);
float avg(int,int);
int main(){
	int s,n;
	float a;
	printf("how many numbers do you wish to add\n");
	scanf("%d", &n);
	s=sum(n);
	a=avg(s,n);
	printf("sum=%d\navg=%f",s,a);
}
int sum(int a)
{
int b[a],i,s=0;
   for(i=0;i<a;i++){
	   scanf("%d",&b[i]);
	   s+=b[i];
	  }
   return s;

}

float  avg(int s, int n) {
	float avg=0;	
  	avg=(float)s/n;
	return avg;
}
