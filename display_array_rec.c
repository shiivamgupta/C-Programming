#include<stdio.h>

int display(int *,int);
int reverse(int *,int);

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
	
	display(p,n);
	
	reverse(p,n);

}


int i=0;
int display(int *p,int n) {

	if (i==n) {
       		printf("\n");
		return 0;
	} else {
       		printf("%d ",*(p+i));
		i++;
		display(p,n);
		
	}

}

int j=0;
int reverse (int *p, int n) {
       
     
	if (j==n) {
       		printf("\n");
		return 0;
	} else {
       		printf("%d ",*(p+(n-(j+1))));
		j++;		
		reverse(p,n);
		
	}
        
}


