#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>
 int main(){
 	system("color F0");
 	setlocale(LC_ALL,"Portuguese");
 	char nome[100];
 	float curso, ver, valor, desc=0,valdesc,valf,valf2,desc2,totdesc,i;
 	
 	printf("Insira seu nome:\t");
 	gets(nome);
 	
 	printf("\n\nNa faculdade s�o oferecidos 4 cursos:\n1-Administra��o\n2-An�lise de Sistemas\n3-Enfermagem\n4-Direito.\n\nOs valores das mensalidades sem descontos s�o:\nAdministra��o: R$800.00\nAn�lise de Sistemas: R$1300.00\nEnfermagem: R$850.00\nDireito: R$900.00.");
 	printf("\n\nInsira o n�mero do curso desejado:\t");
 	scanf("%f",&curso);
 	
 		if(curso==1){
		valor=800;	
		}else 
		if(curso==2){
		valor=1300;
		}else
		if(curso==3){
		valor=850;
		}else
		if(curso==4){
		valor=900;	
		}
		else{printf("O valor inserido � inv�lido");
		}
 		printf("\n\nExistem alguns crit�rios que definem percentuais de desconto, s�o eles:\n\n1. Servidor P�blico: 5%% de desconto\n2. Aluno oriundo de escola p�blica: 10%% de desconto\n3. Segunda Gradua��o: 10%% de desconto");
 	
 	do{
 		printf("\n\nInsira 1 para adicionar um desconto ou\n2 para prosseguir:\t");
 		scanf("%f",&ver);
 		
 		if(ver==1){
		 printf("\n\nInsira o n�mero do desconto:\t");
		 scanf("%f",&valdesc);
		
		if(valdesc==1){desc+=5;}
		else if(valdesc==2){desc+=10;}
		else if(valdesc==3){desc+=10;}
		
	}
 	}while(ver==1);
 	
 	i=valor/100*desc;
 	valf=valor-i;

 	
 	printf("\n\n\nO us�ario %s ",nome);
 	printf("teve o valor cheio de R$%.2f\n", valor);
 	printf("Com os descontos o valor passa a ser de R$%.2f", valf);
 	
 	desc2=desc+5;
 	valf2=valor-(valor/100*desc2);
 	
 	printf("\nSe pago at� o 5� dia �til do m�s o valor ser� de %.2f", valf2);
 	
 	printf("\nVoc� obteve um desconto total de %.2f%%", desc);
 	
 	system("pause");
 }
