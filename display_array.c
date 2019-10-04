#include<stdio.h>

int display(int *, int);
int reverse(int *, int);

int main() {
	int arr[10],i,n;
	int *p;	
	printf("enter number of elements");
	scanf("%d",&n);
	
	printf("enter the array");
	
	for (i=0; i<n; i++) {

	scanf("%d",&arr[i]);
	
	}
	
	p = &arr[0];

	display(p, n);
	reverse(p, n);

}


int display(int *p, int n) {
        int i;

        printf("array in order:");
        for ( i=0; i<n; i++) {

        printf("%d  ",*(p+i));
        }
        printf("\n");
}


int reverse (int *p, int n) {
        int i;

        printf("array in reverse order:");
        for ( i=n-1; i>=0; i--) {

        printf("%d  ",*(p+i));
        }
}


