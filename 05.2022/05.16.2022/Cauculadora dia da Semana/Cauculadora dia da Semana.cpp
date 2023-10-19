#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int main (){
		setlocale(LC_ALL,"Portuguese");
		char c;
		
		printf("Insira um Número entre 1 e 7:\t");
		scanf(" %c",&c);
		
		switch(c){
		case '1':{printf("Domigo\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		}
		case '2':{printf("Segunda\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		}
		case '3':{printf("Terça-feira\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		}
		case '4':{printf("Quarta-feira\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		}
		case '5':{printf("Quinta-feira\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		}
		case '6':{printf("Sexta-feira\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		}
		case '7':{printf("Sabádo\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
			
		default: printf("VALOR INVÁLIDO!");
		}
	}''
		system("pause");
	}
