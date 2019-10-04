#include<stdio.h>

void main(){
	int k,y,x,p,q,i;
	printf("k= ");
	scanf("%d",&k);	
	printf("i= ");
	scanf("%d",&i);	
	printf("x= ");
	scanf("%d",&x);

	printf("y= ");
	scanf("%d",&y);	
	printf("p= ");
	scanf("%d",&p);	
	printf("q= ");
	scanf("%d",&q);
	k=i++;
	printf("k_i++ =%d\n",k);
	k=++i;
	printf("k_i++ =%d\n",k);
	y=x++*10;
	printf("y_x++*10 =%d\n",y);
	y=++x*10;
	printf("y_++x*10 =%d\n",y);
	q=p--/3;
	printf("q_p--/3 =%d\n",q);
	q=--p/3;
	printf("q_--p/3 =%d\n",q);
}
