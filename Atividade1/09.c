#include <stdio.h>

int main(){
	int ladoquad, area, dobarea;
	printf("Digite o valor do lado do quadrado!\n");
	scanf("%d",&ladoquad);
	area = ladoquad*ladoquad;
	dobarea = (area * 2);
	printf("O dobro da Área vale %d\n",dobarea);
	return 0;
}

