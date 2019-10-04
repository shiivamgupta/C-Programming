#include<stdio.h>

int addition(int [2][2], int [2][2]);
int subtraction(int [2][2], int [2][2]);
int multiplication(int [2][2],int [2][2]);
int display(int [2][2]);
int main(){
	int a[2][2]={{1,5},{5,4}};
	int b[2][2]={{5,7},{9,4}};
	display(a);
	printf("\n");
	display(b);
	addition(a,b);
	subtraction(a,b);
	multiplication(a,b);
}

int addition(int a[2][2], int b[2][2]) {
	
	int i,j;
	int c[2][2];
	for(i=0; i<2; i++) {
		for ( j=0; j<2;j++) {
		c[i][j]=a[i][j]+b[i][j];
	
		}
	}
	printf("addition\n");
	display(c);

	return 0;	
}

int subtraction(int a[2][2], int b[2][2]) {
	
	int i,j;
	int c[2][2];
	for(i=0; i<2; i++) {
		for ( j=0; j<2;j++) {
		c[i][j]=a[i][j]-b[i][j];
	
		}
	}
	printf("subtraction\n");
	display(c);

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


int multiplication(int a[2][2],int b[2][2]) {
	
	int i,j;
	int c[2][2];
	for(i=0; i<2; i++) {
		for ( j=0; j<2 ;j++) {
		c[i][j]=(a[i][0]*b[0][j])+(a[i][1]*b[1][j]);
	
		}
	}
	printf("multiplication\n");
	display(c);

	return 0;	
}
