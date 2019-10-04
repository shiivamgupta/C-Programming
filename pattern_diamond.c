#include<stdio.h>

int main() {
        int i, j,k;

        for (i=1; i<6; i++) {
                for (k=5-i; k>0; k--){
                        printf(" ");
                }

                for (j=i; j>0; j--){
                        printf("%d",i);
                }

                for (j=i-1; j>0; j--){
                        printf("%d",i);
                }
                        printf("\n");
        }
	 for (i=4; i>0; i--) {
                for (k=5-i; k>0; k--){
                        printf(" ");
                }

                for (j=i; j>0; j--){
                        printf("%d",i);
                }

                for (j=i-1; j>0; j--){
                        printf("%d",i);
                }
                        printf("\n");
        }

}

