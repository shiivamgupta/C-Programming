
#include<stdio.h>

int display(char *,int);
int reverse(char *,int);

int main() {
        char arr[10];
        int i,n;
        char *p;
        printf("enter number of elements");
        scanf("%d",&n);

        printf("enter the array");

        for (i=0; i<n; i++) {

        scanf("%c",&arr[i]);


        }
        getc;
        p = &arr[0];

        display(p,n);

        reverse(p,n);
}

int i=0;
int display(char *p,int n) {

	if (i==n) {
       		printf("\n");
		return 0;
	} else {
       		printf("%c ",*(p+i));
		i++;
		display(p,n);
		
	}

}

int j=0;
int reverse (char *p, int n) {
       
     
	if (j==n) {
       		printf("\n");
		return 0;
	} else {
       		printf("%c ",*(p+(n-(j+1))));
		j++;		
		reverse(p,n);
		
	}
        
}


