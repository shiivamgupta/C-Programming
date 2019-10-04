#include<stdio.h>

float avg(int,int);
int min(int *, int );
int max(int *, int );

int main(){
	int s=0,n,i;
	float a;
	int *p;
	int mini,maximum;
	printf("how many numbers do you wish to add\n");
	scanf("%d", &n);
	printf("enter the numbers\n");
	int b[n];
   	for(i=0;i<n;i++){
		 scanf("%d",&b[i]);
	  	 s+=b[i];
	  }
	p=b;
	a=avg(s,n);
	mini=min(p,n);
	maximum=max(p,n);
	printf("sum=%d\navg=%f\n",s,a);
	printf("maximum=%d\nminimun=%d\n",maximum,mini);

}

float  avg(int s, int n) {
	float avg=0;	
  	avg=(float)s/n;
	return avg;
}

int max (int *p,int n) {
	int i,maximum;

	for (i=0; i<n-1; i++) {
		if (*(p+i)<*(p+i+1)&&(*(p+i+1)>maximum))
		{
			maximum=*(p+i+1);
		}
	       	else if((*(p+i)>maximum)){
		       
			maximum=p[i];
		}

	}
	return maximum;
}

int min (int *p,int n) {
	int i,mini;

	for (i=0; i<n-1; i++) {
		if (*(p+i)>*(p+i+1)&&(*(p+i+1)<mini))
		{
			mini=*(p+i+1);
		} else if((*(p+i)<mini)){
		       
			mini=*(p+i);
		}

	}
	return mini;
}
