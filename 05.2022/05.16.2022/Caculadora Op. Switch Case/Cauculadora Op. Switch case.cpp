#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main (){
		setlocale(LC_ALL,"Portuguese");
		
		float A, B, A2, S, M, D;
		char op;
		
		printf("Insira dois Valores:\n");
		printf("Valor 1:");
		scanf(" %f",&A);
		
		printf("\nValor 2:");
		scanf(" %f",&B);
		
		printf("Insira uma das opções abaixo:\nA-para soma\nS-para subtração\nM-para multiplicação\nD-para divisão:\n\t");
		scanf(" %c",&op);
		
		A2=A+B;
		S=A-B;
		M=A*B;
		D=A/B;
			
		switch (op){
			case 'A': {printf("%.2f\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",A2);
		break;
		}
			case 'S': {
		printf("%.2f\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", S);
		break;
		} 
		
		case 'M': {
		printf("%.2f\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", M);
		break;
		}
		
		case 'D': {
		printf("%.2f\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", D);
		break;
		}
			Default: printf("OPÇÃO invalida!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		}
		
		system("pause");
	}
		

