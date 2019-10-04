#include<stdio.h>
/*int arr[5]; int (*parr)[5];
parr=&arr;
sizeof(parr), sizeof(*parr), sizeof(**parr)*/
int main() {

	int a[5]={10,20,30,40,50};
	int (*p)[5];
	p=&a;

	printf("%d\n%d\n%d\n ",sizeof(p),sizeof(*p),sizeof(**p));
			return 0;
}
