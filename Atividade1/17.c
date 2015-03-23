#include <stdio.h>

int main(){
	int salbase,salreceber,salimp;
	printf("Digite o salario base!");
	scanf("%d", &salbase);
	salimp = (0,1*salbase)-salbase;
	salreceber = salimp+50;
	printf("O novo salrio é %d", salreceber);
	return 0;
}
