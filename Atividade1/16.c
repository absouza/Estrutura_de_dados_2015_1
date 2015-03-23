#include <stdio.h>

int main(){
	int salbase,salreceber,salgrat;
	printf("Digite o salario base!");
	scanf("%d", &salbase);
	salgrat = (0,05*salbase)+salbase;
	salreceber = (0,07*salgrat)-salgrat;
	printf("O novo salrio é %d", salreceber);
	return 0;
}
