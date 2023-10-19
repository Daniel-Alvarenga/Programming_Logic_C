#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>

	int main(){
		system("color F0");
		setlocale(LC_ALL,"Portuguese");
		
		float alt, pes, imc;
		
		printf("Insira sua Altura(m):\t");
		scanf("%f", &alt);
		
		printf("\nInsira seu Peso(kg):\t");
		scanf("%f", &pes);
		
		imc=pes/(alt*alt);
		
		printf("\n\nSeu IMC é de: %.2f e você está",imc);
		
		if(imc<18.5){printf(" abaixo do peso...");}
		else if(imc<25){printf(" com o peso normal. \2 ");}
		else if(imc<30){printf(" acima do peso...");}
		else {printf(" obeso...");}
		
		printf("\n\n\n\n\n\n");
		
		system("pause");
	}
	
	
	
