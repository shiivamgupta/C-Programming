#include<stdio.h>

int trace(int [2][2]) ;
int display(int [2][2]);
int main(){
	int a[2][2]={{1,5},{3,4}};
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
int display( int c[2][2]) {
	int i,j;

	for(i=0; i<2; i++) {
		for ( j=0; j<2;j++) {
	printf("%d\t",c[i][j]);
	
		}
	printf("\n");
	}
}
