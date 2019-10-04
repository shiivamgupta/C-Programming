#include<stdio.h>
//determinant program
int trace(int [2][2]) ;
int display(int [2][2]);
int main(){
	int n,j;
	printf("enter the degree of matrix");
	scanf("%d",n);
	int a[n][n];
	
	for(i=0; i<2; i++) {
		for ( j=0; j<2;j++) {
	scanf("%d",&a[i][j]);
			}
	}
	printf("\n");
	display(a);
	printf("\n");
	trace(a);
}

int trace(int a[2][2]) {
	
	int i,j;
	int c=0;
	for(i=0; i<2; i++) {
		for ( j=0; j<2;j++) {
		if(i==j){
		c=a[i][j]+c;
		}
	}
	}
	printf("trace");
	printf("=%d \n ",c);
	return 0;	
}
		
