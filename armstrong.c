#include<stdio.h>
#include<math.h>
int main()
{int a,i,b,amsum=0,d;
	int c[50];
	printf("enter the number whose armstrong number has to be printed\n");
	scanf("%d",&a);
	d=a;
	for(i=0;a>0;i++)
		{c[i]=a%10;
		a=a/10;
		}
	b=i;
	for(i=0;i<b;i++)
	amsum=amsum+pow(c[i],b);
	printf("armstrong number is %d\n",amsum);
	if(d==amsum)
	printf("%d is an armstrong number\n",d);
	else
	printf("%d is not an armstrong number\n",d);
	return 0;
	}
