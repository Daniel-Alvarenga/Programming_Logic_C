#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int  main (){
	setlocale(LC_ALL,"Portuguese");
	
	int premio=7, num;
do{
	printf("Chute o n�mero da sorte (somente n�meros inteiros):\t");
	scanf("%d",&num);
	
	if(num!=7){printf("Voc� ERROU! TENTE NOVAMENTE\n\n");
	}

}while(num!=7);

printf("Parab�ns! Voc� acertou o N�mero da SORTE \3\n\n");
system("pause");
}
