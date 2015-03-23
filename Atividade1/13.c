#include <stdio.h>

int main(){
	int n1,n2,n3,p1,p2,p3,mediapond;
	printf("Digite as tres notas!\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("Digite os pesos!\n");
	scanf("%d %d %d", &p1, &p2, &p3);
	mediapond = (n1*p1)*(n2*p2)+(n3*p3);
	printf("%d\n", mediapond);
	return 0;
}

