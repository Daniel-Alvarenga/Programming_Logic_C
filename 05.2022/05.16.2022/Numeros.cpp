#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int  main (){
	setlocale(LC_ALL,"Portuguese");
	
	int num, cont=0;
	
	printf("Ol� querido usu�rio, insira 10 n�meros inteiros abaixo e lhe informaremos se ele � par ou �rmpar e se est� ou n�o entre 0 e 100.\n\n");
	
	while(cont<10){
		printf("Insira um n�mero inteiro:\t");
		scanf("%d",&num);
	
	if(num%2!=0){printf("O n�mero � �mpar e");}
	else{printf("O n�mero � par e");}
	
	if(num>0 && num<100){printf(" est� entre 0 e 100\n\n");}
	else{printf(" n�o est� entre 0 e 100\n\n");}
	
	
	
	
		cont++;
	}
	
	system("pause");
}
