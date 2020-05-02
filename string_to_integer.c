#include<stdio.h>

int stoi(char str[]){                      /* To convert string to number we take each number from the string and 
                                              subtracts its asci value from the 
					      asci value of '0' and we store that number in the integer and 
					      we keep doing it until we get null character */


int i,n;
n=0;                                                                               

for(i=0;str[i]>'0'&& str[i]<'9';i++)
n=10*n+ ( str[i]-'0');
return n;
}



int main(){

char str[20]={'1','2','3','4','5'};

int ret=stoi(str);
printf("%d",ret);



}

