#include<stdio.h>

int gcd(int, int);

int main() {

        int a,b,c,i,lcm=0;

        printf("enter the two numbers: ");
        scanf("%d%d",&a,&b);

        c=gcd(a,b);
        lcm=(a*b)/c;

        printf("LCM=%d\n",lcm);
        printf("GCD=%d\n",c);
}

int gcd(int a , int b) {
        int c,i;

        if(a<b) {
                i=a;
                a=b;
                b=i;
		        }

        while(b) {
                c=a%b;
                a=b;
                b=c;
        }

        return a;

}
