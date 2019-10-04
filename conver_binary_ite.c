


/*#include<stdio.h>
int convo(int ,int);
int todecimal(int,int);
int main()
{

int b,n,ch;
char ch2;
start:
printf("\t\t\tHello!\n The following are your choices for conversion:\n1.Decimal to Binary\n2.Decimal to Octal\n3.Decimal to Hexadecimal\n4.Octal to Decimal\n5.Hexadecimal to Decimal\n6.Binary to Decimal\n\n Please enter the number for conversion:");
scanf("%d",&n);
printf("\nEnter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1 :printf("\nDecimal to Binary:");
	convo(n,2);
	break;
case 2 :printf("\nDecimal to Octal");
        convo(n,8);
        break;
case 3 :printf("\nDecimal to Hexadecimal");
        convo(n,16);
        break;
case 4 :printf("\nOctal to Decimal");
        todecimal(n,8);
        break;
case 5 :printf("\nHexadecimal to Decimal");
        todecimal(n,16);
        break;
case 6 :printf("\nBinary to Decimal");
        todecimal(n,2);
        break;
}
return 0;
}



int convo(int n,int base)
{
 int num,i=0,arr[64];
while(n)
   {	   
    num=(n%base);
    arr[i]=num;
    i++;
    n=n/base;
   } 	

printf("\nThe converted form is :");
for(int j=i-1;j>=0;j--)
{
	if(base==16)
	{
		if(arr[j]>=10)
		{
			if(arr[j]==10)
				arr[j]='A';
			else if(arr[j]==11)
				arr[j]='B';
			else if(arr[j]==12)
				arr[j]='C';
			else if(arr[j]==13)
				arr[j]='D';
			else if(arr[j]==14)
				arr[j]='E';
			else
		        	arr[j]='F';
			printf("%c",arr[j]);
		}
	        else	
		    printf("%d",arr[j]);
	}
	else
		printf("%d",arr[j]);
}
}
int todecimal(int n,int b)
{
	return 0;
}*/
