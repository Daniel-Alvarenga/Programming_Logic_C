#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		int cont=40, vetor=10, i, y;
		char senha[10]={'E','T','S','E','P',' ','O','D','U','T'};
		
		
		printf("Senha inversa:");
		
		for(y=1;y<=vetor;y++){
			
			for(y=vetor;y>=vetor;y--){
			printf("%c ",senha[y]);
		}
		
		}
		
		printf("\n\n\n");
		
		system("pause");
}
