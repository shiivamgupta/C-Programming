#include<stdio.h>

int main() {
        int a, b,x,y, z,pop,mult ;
        printf("enter two  numbers");
        scanf("%d%d",&a,&b);
        pop=1;
        while(a != 0) {
                x= a % 10;
                z=b;

        while(z != 0) {
                y=z % 10;
                mult= x*y;
                pop*=mult;
                printf("mult%d\n", mult);
                z=z/10;
        }
        a=a/10;
        }
        printf("pop=%d",pop);
        return 0;
}             
