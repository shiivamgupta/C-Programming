/*
  *p++, *++p, (*p)++, ++(*p), 
  
  ++*p, *(p++), *(++p)
*q--, *--q, --(*q), --*q,
(*q)--, *(q--), *(--q)
*/

#include<stdio.h>

int main()
{
	int a[5]={10,20,30,40,50};
	int *p=a;         //p=1000
	int *q=*(&a+1)-1; //&a=1000,&a+1=1020 pointing to whole array ,*(&a+1)=1020 pointing to first ele of arr ,*(&a+1)-1=1016;
        printf("p//1000=%u\nq=%u\n",p,q);
	printf("a[5]// fifth element of array=%d\n",a[4]);
	printf("address of a[5]=%u\n",p+4);
	printf("*q// derefrencing of, q=a[5]=%d\n",*q);
	int b=*p++;
	printf("b=*p++==> %d\n",b);
	b=*++p;
	printf("b=*++p==> %d\n",b);
	b=*p--;
	printf("b=*p--==> %d\n",b);
	b=*--p;
	printf("b=*--p==> %d\n",b);
	
	b=(*p)++;
	printf("b=(*p)++==> %u\n",b);
	b=++(*p);
	printf("b=++(*p)==> %d\n",b);
	b=--(*p);
	printf("b=--(*p)==> %d\n",b);
	b=(*p)--;
	printf("b=(*p)--==> %u\n",b);
	
	b=++*p;
	printf("b=++*p==> %d\n",b);
	b=*(p++);
	printf("b=*++p==> %d\n",b);
	b=*(++p);
	printf("b=*++p==> %d\n",b);
/**q--, *--q, --(*q), --*q,
(*q)--, *(q--), *(--q)*/
	b=*q--;
	printf("b=*q--==> %u\n",b);
	b=*--q;
	printf("b=*--q==> %d\n",b);
	b=--(*q);
	printf("b=--(*q)==> %d\n",b);
	b=--*q;
	printf("b=--*q==> %d\n",b);
	b=(*q)--;
	printf("b=(*q)--==> %d\n",b);
	b=*(q--);
	printf("b=*(q--)==> %d\n",b);
	b=*(--q);
	printf("b=*(--q)==> %d\n",b);


}	
