#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int A, B;
	
	printf("Olá querido usuário, descubra se o seu número é par ou ímpar \n\n\n\n");
	
	printf("Insira um número inteiro qualquer:\n");
	scanf("%d",&A);
	
	
	B=A%2;
	
	if (B==0) {
		printf ("O número inserido é PAR\n\n\n\n\n\n\n\n\n\n\n\n\n");
	} else { printf("O número inserido é ÍMPAR\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	
	system("pause");
}
