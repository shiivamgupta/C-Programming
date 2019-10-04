#include<stdio.h>

int display(char *, int);
int reverse(char *, int);

int main() {
	char  arr[10];
	int i,n;
	char *p;	
	printf("enter number of elements = ");
	scanf("%d",&n);
	
	printf("enter the string = ");
	
	for (i=0; i<n; i++) {

	scanf("%c",&arr[i]);
	
	}
	getc;
	
	p = &arr[0];

	display(p, n);
	reverse(p, n);

}

int display(char *p, int n) {
	int i;
        
	printf("string in order:");

        for ( i=0; i<n; i++) {
	printf("%c ",*(p+i));
	}
	printf("\n");
}




int reverse ( char *p, int n) {
        int i;

        printf("string in reverse order:");
        for ( i=n-1; i>=0; i--) {

        printf("%c  ",*(p+i));
        }
}

