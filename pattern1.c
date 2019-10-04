#include<stdio.h>
int main() {
	int i, j;

	for (i=1; i<6; i++) {
		for (j=i; j>0; j--){
			printf("%d",i);
		}

			printf("\n");
	}
}
