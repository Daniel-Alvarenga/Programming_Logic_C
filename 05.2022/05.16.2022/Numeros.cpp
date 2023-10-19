#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int  main (){
	setlocale(LC_ALL,"Portuguese");
	
	int num, cont=0;
	
	printf("Olá querido usuário, insira 10 números inteiros abaixo e lhe informaremos se ele é par ou írmpar e se está ou não entre 0 e 100.\n\n");
	
	while(cont<10){
		printf("Insira um número inteiro:\t");
		scanf("%d",&num);
	
	if(num%2!=0){printf("O número é ímpar e");}
	else{printf("O número é par e");}
	
	if(num>0 && num<100){printf(" está entre 0 e 100\n\n");}
	else{printf(" não está entre 0 e 100\n\n");}
	
	
	
	
		cont++;
	}
	
	system("pause");
}
