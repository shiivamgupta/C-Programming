#include<stdio.h>

int fact( int);

int main() {
        int a,f;
        printf("enter the number");
        scanf("%d",&a);
        f=fact(a);
        printf("factorial=%d\n",f);
}

int fact (int a){
        int f=1;
        if (a==0) {
                return 1;
        }else {
                f=a*fact(a-1);
        }
        return f;
}

