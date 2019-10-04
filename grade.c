#include <stdio.h>


int main()

{   int a;
    
char c;
    
printf("Enter marks:");
    
scanf("%d",&a);
    
    
if(a>=35 && a<39) {
    
c='F';
    
}
    
    

else if(a>=40 && a<59) 
{
    c='D';
    
}
    
    
else if(a>=60 && a<79) {
    
c='C';
    
}
    
    

else if(a>=80 && a<89) 
{
    c='B';
    
}
    
    

else if(a>=90 && a<=100) {
    
c='A';
    
}
    
    
printf("Grade of student=%c\n",c);
    
return 0;

}
