#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	int A, B;
	
	printf("Ol� querido usu�rio, descubra se o seu n�mero � par ou �mpar \n\n\n\n");
	
	printf("Insira um n�mero inteiro qualquer:\n");
	scanf("%d",&A);
	
	
	B=A%2;
	
	if (B==0) {
		printf ("O n�mero inserido � PAR\n\n\n\n\n\n\n\n\n\n\n\n\n");
	} else { printf("O n�mero inserido � �MPAR\n\n\n\n\n\n\n\n\n\n\n\n\n");
	}
	
	system("pause");
}
