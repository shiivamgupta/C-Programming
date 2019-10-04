#include <stdio.h>


int main()
{
    
int i,a,b,c=0,d;
    
printf("Enter the number to check if it is armstrong or not=");
    
scanf("%d",&a);
    
i=a;
    
while(a!=0)
    {
        
b=a%10;
        
a=a/10;
        
d=b*b*b;
        
c+=d;    
    
        
    
}
    
if (i==c)
    
{
        printf("number is armstrong");
        
    
}else
    {
        
printf("number is not armstrong");
    
}
    
	

return 0;*q--, *--q, --(*q), --*q,
(*q)--, *(q--), *(--q)

}
