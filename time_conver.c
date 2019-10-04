#include<stdio.h>

int main() {
	int hh,mm,ss,sec;
	int HH,MM,SS;

	printf("enter the time in HH:MM:SS format");
	scanf("%d%d%d",&hh,&mm,&ss);

	sec=(hh*3600) + (mm*60) + ss;
	printf("total time in seconds=%d\n",sec);

	printf("enter time in seconds format");
	scanf("%d",&sec);

	HH=sec/3600;

	MM=(sec%3600)/60;

	SS=sec-(HH*3600+MM*60);

	printf("time in HH:MM:SS format=%d:%d:%d\n",HH,MM,SS);
	return 0;
	
}
