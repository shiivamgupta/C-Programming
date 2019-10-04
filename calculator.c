#include <stdio.h>


int add(int ,int );

int sub(int ,int );

int mult(int ,int );

int divi(int ,int );


int main()
{   
int a,b,i;
    
float j;
    
printf("Enter your choice\n");
    
printf("1-add\n2-sub\n3-mult\n4-div");
    
scanf("%d",&i);
    
printf("enter numbers");
    
scanf("%d%d",&a,&b);
     
switch (i){
     
case 1:{
     
add(a,b);
     
break;}
     
     

case 2:{
     
sub(a,b);
     
break;}
     
     

case 3:{
     
mult(a,b);
     
break;}
     
     
case 4:{
     
divi(a,b);
     
break;}
     
}
    
return 0;

}



int add(int a, int b) {
    
int c;
    
    
c = a+b;



 
    
printf("sum=%d\n",c);

}



int sub(int a, int b) 
{
    int c;
    
    
c = a-b;
    
    
printf("sub=%d\n",c);

}


int mult(int a, int b) 
{
    int c;
    
    
c = a*b;
    
    
printf("mult=%d\n",c);

}



int divi(int a, int b) 
{
    float c;
    
    
c = (float)a/b;
    
    
printf("division=%f\n",c);

}    
  

