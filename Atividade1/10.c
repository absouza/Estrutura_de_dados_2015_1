#include <stdio.h>

int main(){
	float hora,mes,salario;
	printf("Quanto voce ganha por hora?\n");
	scanf("%f",&hora);
	printf("Quantas horas voce trabalha por mes?\n");
	scanf("%f",&mes);
	salario = hora * mes;
	printf("Seu salario é de R$ %f\n",salario);
	return 0;
}

