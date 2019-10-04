#include<stdio.h>

int *add(int *a, int*b)
{
	int i;
	static int   d[5];
	for(i=0;i<5;i++)
	{
	*(d+i)=*(a+i)+*(b+i);
	}

	return d;

}

int main()
{
	int l=5;
int a[l],b[l],i;
int *p;

for (i=0;i<l;i++)
	{
	printf("enter num of array 1=");
	scanf("%d",&a[i]);
//	printf("address=%u\n",(a+i));
	}
for (i=0;i<l;i++)
	{
	printf("enter num of array 2=");
	scanf("%d",&b[i]);
//	printf("address=%u\n",(a+i));
	}

	p=a;
	int *t=b;
	p=add(p,t);
	printf("Resultant array = ");
for (i=0;i<l;i++)
	{
	printf(" %d",*(p+i));
//	printf(" %u\n", p+i);
	}
printf("\n");

}

