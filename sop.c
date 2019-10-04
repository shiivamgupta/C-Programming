#include<stdio.h>

int main() {
	int a, b,x,y, z,sop,mult ;
	printf("enter two  numbers");
	scanf("%d%d",&a,&b);
	sop=0;
	while(a != 0) {
		x= a % 10;
		z=b; 

	while(z != 0) {
		y=z % 10;
		mult= x*y;
		sop+=mult;
		printf("mult%d\n", mult);
		z=z/10;
	}
	a=a/10;
	}
	printf("sop=%d",sop);
	return 0;
}

	


