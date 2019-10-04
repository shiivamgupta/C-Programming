#include<stdio.h>

int main(){
	int a[5],i,sum;
	float avg;
	sum=0;
	printf("enter marks");
	for ( i=0; i<5 ;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=((float)sum)/5;
	printf("%f",avg);
	return 0;
}
