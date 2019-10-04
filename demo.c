#include<stdio.h>

int main() {

	char a[]="cdac-acts";
	char *b="cdac-acts";

	printf("%d%d",sizeof(*a),sizeof(*b));
			return 0;
}
