#include <stdio.h>
int main()
{
    int n, i, flag = 0,sum=0,a;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            sum=sum+i;
            
        }
    }
    
    a=(float)sum/2;
    if(a==n)
    {
        printf("number is perfect");
    }else
    {
        printf("number is not perfect");
    }
    
        return 0;
}