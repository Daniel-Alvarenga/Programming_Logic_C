#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int quantf;
	float salar, salarau, au;
	
	printf("P�gina de auxil�o");
	
	printf("\n\nQuantos filhos voc� tem?\n");
	scanf("%d",&quantf);
	
	au= quantf*100;
	
		
	if  (quantf<=0){
		printf("\n\nVoc� n�o tem direito ao aux�lio creche.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	} else
	
	{
	printf("\ninsira seu sal�rio:\n");
	scanf("%f",&salar);
	
	salarau= salar+(quantf*100);
	
	printf("\nVoc� tem direito ao aux�lio creche de R$%.2f\n Seu sal�rio ser� R$%.2f.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", au, salarau);}
	
	system("pause"); 
}
