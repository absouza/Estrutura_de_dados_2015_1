#include <stdio.h>
#define PI 3,141592

int main(){
	float raio, area, raio2;
	printf("Digite o valor do raio do circulo!\n");
	scanf("%f",&raio);
	raio2 = raio*raio;
	area = PI * raio2;
	printf("%f\n",raio2);
	return 0;
}

