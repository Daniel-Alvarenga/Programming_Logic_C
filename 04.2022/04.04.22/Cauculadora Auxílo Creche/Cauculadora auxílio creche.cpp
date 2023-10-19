#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int quantf;
	float salar, salarau, au;
	
	printf("Página de auxilío");
	
	printf("\n\nQuantos filhos você tem?\n");
	scanf("%d",&quantf);
	
	au= quantf*100;
	
		
	if  (quantf<=0){
		printf("\n\nVocê não tem direito ao auxílio creche.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	} else
	
	{
	printf("\ninsira seu salário:\n");
	scanf("%f",&salar);
	
	salarau= salar+(quantf*100);
	
	printf("\nVocê tem direito ao auxílio creche de R$%.2f\n Seu salário será R$%.2f.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", au, salarau);}
	
	system("pause"); 
}
