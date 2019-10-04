#include<stdio.h>

int decimal_binary(int);
int decimal_octal(int);
int binary_octal(int);
int binary_decimal(int);
int octal_decimal(int);
int octal_binary(int);
int decimal_hexadecimal(int);
//int hexadecimal_decimal(int);
int power(int , int);

int main() {
	int a,n;
	printf("enter the choice=");
	printf("decimal_binary=1\ndecimal_octal=2\nbinary_octal=3\n");
	printf("binary_decimal=4\noctal_decimal=5\noctal_binary=6\n");
	printf("decimal to hexadecimal=7\n\n");
	printf("Enter the choice = ");
	scanf("%d",&a);
	
	printf("enter the number = ");
	scanf("%d",&n);

	//printf("%d",power(n,a));

	switch(a) {

		case 1:{
			printf("decimal to binary\n");
			decimal_binary(n);
			printf("\n");
			break;
		       }
		case 2:{
			printf("decimal to octal\n");
			decimal_octal(n);
			printf("\n");
			break;
		       }
		case 3 :{
			printf("binary to octal\n");
			binary_octal(n);
			printf("\n");
			break;
		       }
		case 4:{
			printf("binary to decimal\n");
			int dec;
			dec = binary_decimal(n);
			printf("%d\n", dec);
			break;
		       }
		case 5:{int deci;
			printf("octal to decimal\n");
			deci=octal_decimal(n);
			printf("%d\n", deci);
			break;
		       }
		case 6:{
			printf("octal to binary\n");
			octal_binary(n);
			printf("\n");
			break;
		       }
		
		case 7:{
			printf("decimal to hexadecimal\n");
			decimal_hexadecimal(n);
			printf("\n");
			break;
		       }
/*		case 8:{
			printf("hexadecimal to decimal\n");
			hexadecimal_decimal(n);
			break;
		       }*/
	}

}


int decimal_hexadecimal(int n) {
	int hex,i,a;
	static char hexcode[16] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	if (n==0){
		return 0;
	} else {

		hex=n%16;
		n=n/16;
		decimal_hexadecimal(n);
		printf("%c",hexcode[hex]);
}
}
/*
int hexadecimal_decimal(int n)
{
	int a,b;
	if(n==0){
		return 0;
	} else {
		a=n%10;
		b=a*power(16,j++);
		n=n/10;
		dec=octal_decimal(n);
		dec=b+dec;
		return dec;
	

}
}*/		

int power (int num,int p){
	int i,a=1;
	for (i=0; i<p; i++){
	
		a=a*num;
		
	}
	return a;
}


int decimal_binary(int n) {
	int bin,i,a;
	if (n==0){
		return 0;
	} else {

		bin=n%2;
		n=n/2;
		decimal_binary(n);
		printf("%d",bin);
	}
}


int decimal_octal(int n) {
	int oct,i,a;
	if (n==0){
		return 0;
	} else {

		oct=n%8;
		n=n/8;
		decimal_octal(n);
		printf("%d",oct);
	}
}



int i=0;
int binary_decimal(int n){
	int dec,a,b;
	if(n==0){
		return 0;
	} else {
		a=n%10;
		b=a*power(2,i++);
		n=n/10;
		dec=binary_decimal(n);
		dec=b+dec;
		return dec;
		
		
	}
}

int binary_octal(int n)
{
	int oct;
	oct = binary_decimal(n);
	
	decimal_octal(oct);
	return 0;
}

int octal_binary(int n)
{	int dec;
	dec = octal_decimal(n);
	decimal_binary(dec);
	return 0;

}


int j=0;
int dec=0;
int octal_decimal(int n)
{
	int a,b;
	if(n==0){
		return 0;
	} else {
		a=n%10;
		b=a*power(8,j++);
		n=n/10;
		dec=octal_decimal(n);
		dec=b+dec;
		return dec;
	

}
}		
