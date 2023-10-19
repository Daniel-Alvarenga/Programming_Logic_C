#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main (){
		setlocale(LC_ALL,"Portuguese");
		char A;
		
		printf("Insira uma letra:\t");
		scanf(" %c", &A);
		
		switch (A){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			
			{printf("A letra inserida ""%c"" é uma vogal\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", A);
		}
			break;
			
			default: {printf("A letra inserida ""%c"" é uma consoante\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", A);
			}
		}
		
		system("pause");
	}
