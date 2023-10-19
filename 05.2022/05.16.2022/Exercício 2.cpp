#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int  main (){
	setlocale(LC_ALL,"Portuguese");
	
	int premio=7, num;
do{
	printf("Chute o número da sorte (somente números inteiros):\t");
	scanf("%d",&num);
	
	if(num!=7){printf("Você ERROU! TENTE NOVAMENTE\n\n");
	}

}while(num!=7);

printf("Parabéns! Você acertou o Número da SORTE \3\n\n");
system("pause");
}
