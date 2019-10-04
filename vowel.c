#include<stdio.h>

int main() {
	char vow[10]={"aeiouAEIOU"};
	char a ;
	int i;
	printf("enter the character");
	scanf("%c",&a);
	for (i=0;i<=9;i++) {
		if ( a == vow[i]) {
			printf("character is vowel");
			break;
		}	
		
	}
 	if (i==10) {
		
		printf("character is not vowel");
	}
}
