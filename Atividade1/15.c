#include <stdio.h>

int main(){
	int salatual, percent,novosal;
	printf("Digite o salario atual!");
	scanf("%d", &salatual);
	printf("Digite o percentual de aumento!");
	scanf("%d", &percent);
	novosal = (salatual + (salatual*(percent/100));
	printf("O novo salrio é %d", novosal);
	return 0;
}
