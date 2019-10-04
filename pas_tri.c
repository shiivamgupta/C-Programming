#include<stdio.h>

int main() {
	int i, j,n,k;
	static int a[10],b[10];
	printf("enter number of steps in pascal triangle\n");
	scanf("%d",&n);

	a[0]=1;
	for (i=1; i<=n; i++) {
	b[0]=1;
	b[i]=1;
		for (j=1; j < i; j++) {
			b[j]=a[j-1]+a[j];
		}
		for (k=0; k<i; k++) {
			printf("%d ",b[k]);
			a[k]=b[k];
			b[k]=0;
		}
		printf("\n");
	}	
}
