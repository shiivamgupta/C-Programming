#include<stdio.h>
/*const int * p;
int const * p
int * const p = &x;
const int * const p = &x;
Try *p=20, p++, (*p)++, p=&y*/


int main() {
	
	int a=10;
	const int y=90;
	const int * p1;
	int const * p2;
	int * const p3=&a ;
	const int * const p4 = &a;

	p1=&a;
	p2=&a;
	printf("p1 = %u\n", *p1);
	printf("p2 = %u\n", *p2);
	printf("p3 = %u\n", p3);
	printf("p4 = %u\n", p4);
//	printf("*p1 = %u\n", *p1=20);
//	printf("*p2 = %u\n", *p2=20);
	printf("*p3 = %u\n", *p3=20);
	printf("*p4 = %u\n", *p4=20);
//	printf("p1++ = %u\n", p1++);
//	printf("p2++ = %u\n", p2++);
//	printf("p3++ = %u\n", p3++);
//	printf("p4++ = %u\n", p4++);
//	printf("(*p1)++ = %u\n", (*p1)++=20);
//	printf("(*p2)++ = %u\n", (*p2)++=20);
//	printf("(*p3)++ = %u\n", (*p3)++=20);
//	printf("(*p4)++ = %u\n", (*p4)++=20);
	p1 = &y;
	p2 = &y;
//	p3 = &y;
//	p4 = &y;
	printf("p1 = %u\n", p1);
	printf("p2 = %u\n", p2);
	printf("p3 = %u\n", p3);
	printf("p4 = %u\n", p4);
//	printf("*p1 = %u\n", *p1=20);
//	printf("*p2 = %u\n", *p2=20);
//	printf("*p3 = %u\n", *p3=20);
//	printf("*p4 = %u\n", *p4=20);
//	printf("p1++ = %u\n", p1++);
//	printf("p2++ = %u\n", p2++);
//	printf("p3++ = %u\n", p3++);
//	printf("p4++ = %u\n", p4++);
//	printf("(*p1)++ = %u\n", (*p1)++=20);
//	printf("(*p2)++ = %u\n", (*p)++=20);
//	printf("(*p3)++ = %u\n", (*p3)++=20);
//	printf("(*p4)++ = %u\n", (*p)++=20);
	
	return 0;
}
