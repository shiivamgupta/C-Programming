#include<stdio.h>

int *reverse(int *a)
{
	int i;
	static int   b[10];
	for(i=9;i>=0;i--)
	{
	*(b+i)=*(a+(9-i));
	}

	return b;

}

int main()
{
int a[10],b[10],i;
int *p;

for (i=0;i<10;i++)
	{
	printf("enter num=");
	scanf("%d",&a[i]);
	printf("address=%u\n",(a+i));
	}

	p=a;
	p=reverse(p);
	printf("Reverse array = ");
for (i=0;i<10;i++)
	{
	printf(" %d",*(p+i));
	printf(" %u\n", p+i);
	}
}

