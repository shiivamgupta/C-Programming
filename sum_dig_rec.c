#include <stdio.h>


int sum_digits(int);


int main()
{
    
int i,a,b,c=0,d;
    
printf("Enter the number=");
  
  scanf("%d",&a);
    
b=sum_digits(a);
   
 printf("sum of digits=%d",b);


return 0;

}

int j=0;

int sum_digits(int n) 
{

 int i,k;

 
 if (!n)
 {

  return 0;  
 
 } else 
{
    
 i=n%10;
 
     n=n/10;
     
j=i+sum_digits(n);
   
 
 }
 
    
    if (j/10!=0)
  
  {
  k=sum_digits(j);
      
return k;
 
   } 
else 
{
        
return j;

    }

}