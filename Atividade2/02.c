#include <stdio.h>

int main(){
	float media, a,b,c, mediapond,notaexame;
	scanf("%f %f %f", &a,&b,&c);
	media = (a+b+c)/3;
	printf("%6.2f\n",media);
	//mediapond = media/10;
	//printf("%6.2f\n ", mediapond);
	if(media>0 && media<3){
		printf("Reprovado\n");
	}
	if(media>=3 && media<7){
		notaexame = 6 - media;
		printf("Exame\n");
		printf("precisa tirar %f para passar",notaexame)
	}
	if(media>=7 && media<10){
		printf("Aprovado\n");
	}
	return 0;
	
}
