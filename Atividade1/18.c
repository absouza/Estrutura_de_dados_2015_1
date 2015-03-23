#include <stdio.h>

int main(){
	int base,h,area;
	printf("Digite a base!");
	scanf("%d", &base);
	printf("Digite a altura!");
	scanf("%d", &h);
	area = (base*h)/2;
	printf("A área eh %d", area);
	return 0;
}
