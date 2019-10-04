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
        int f=1,i;

	if(!a) {
		f=1;
		return f;
	}else {

	for(i=a; i>0; i--) {
	f=f*i;
	}
        
	}
        return f;
}

