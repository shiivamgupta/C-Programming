#include<stdio.h>

int leap(int);

int main() {
	
	int a;
	a=leap(a);
	if (a==1){
		
		printf("leap year\n");
	}else {
		
		printf(" not leap year\n");
	}
}

int leap( int a ) {
	
	printf("enter the year");
	scanf("%d",&a);
	if (a%4 == 0 && a%100 != 0){		
		return 1;
	
	}
	if (a%100==0 && a%400==0){
	
		return 1;
	}
	

	else {
		return 0;
}
}
