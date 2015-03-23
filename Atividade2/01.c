#include <stdio.h>

int main(){
	float media, a,b,c, mediapond;
	scanf("%f %f %f", &a,&b,&c);
	media = (a*2)+(b*3)+(c*5);
	//printf("%6.2f\n",media);
	mediapond = media/10;
	printf("%6.2f\n",mediapond);
	if(mediapond>0 && mediapond<5){
		printf("E\n");
	}
	if(mediapond>=5 && mediapond<6){
		printf("D\n");
	}
	if(mediapond>=6 && mediapond<7){
		printf("C\n");
	}
	if(mediapond>=7 && mediapond<8){
		printf("B\n");
	}
	if(mediapond>=8 && mediapond<=10){
		printf("A\n");
	}
	return 0;
}

