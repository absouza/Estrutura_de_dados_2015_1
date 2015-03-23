#include <stdio.h>

int main(){
	int metro, cent;
	printf("Digite o valor em metros!\n");
	scanf("%d", &metro);
	cent = (metro * 100);
	printf("O valor em centimetros eh %d\n", cent);
	return 0;
}

