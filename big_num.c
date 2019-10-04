#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter three numbers=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{printf("biggest number is=%d\n",a);
	}else if(b>c && b>a)

	{printf("biggest number is=%d\n",b);}
		else

	{printf("biggest number is=%d\n",c);}
}
