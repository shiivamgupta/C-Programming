#include<stdio.h>
int main(){

int a=10,b=20,c=30;
int d;
d=++a,++b,++c,a+5;
printf("d1=%d",d);
d=(++a,++b,++c,a+5);
printf("d2=%d",d);
}
