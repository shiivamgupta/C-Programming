#include<stdio.h>

int* test(int x)
{
static int y;
y = x*x;

printf("==%d\n",y);

return &y;
}
int main(){
test(6);
}
