#include<stdio.h>

int main() {
	float bs, hra, da, pf, gs, ns;
	printf("enter Basic salary=");
	scanf("%f", &bs);
	hra=0.2 * bs;
	da = 0.4 * bs;
	gs = hra + da + bs;
	pf = gs * 0.1;
	ns = gs - pf;

	printf("net salary= %f", ns);
	return 0;
}

