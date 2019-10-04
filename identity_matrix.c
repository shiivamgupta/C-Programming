#include<stdio.h>

int main () {
	int n,i,j,k;

	printf("enter degree of matrix\n");
	scanf("%d",&n);
	int a[n][n];
	int null[n][n];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if (i==j){
				a[i][j]=1;		
			} else {
				a[i][j]=0;		

			}
		
			null[i][j]=0;
		}		}


	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {

		printf("%d ", a[i][j]);
		//printf("%d ", null[i][j]);
		printf("\t");
		}
		printf("\n");
	}


		printf("\n");
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {

	//	printf("%d ", a[i][j]);
		printf("%d ", null[i][j]);
		printf("\t");
		}
		printf("\n");
	}


	return 0;
}

