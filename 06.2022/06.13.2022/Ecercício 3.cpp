#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		int cont=40, vetor=10, y, i;
		char senha[10]={'E','T','S','E','P',' ','O','D','U','T'};
		
		
		printf("Senha inversa:\n\n");
		
		for(i=1;i<=cont;i++){
			printf("%d",i);
		for(y=vetor;y>=0;y--){
			printf("%c ",senha[y]);
		}
		printf("\n\n\n");
		
		}
		
		
		system("pause");
}
