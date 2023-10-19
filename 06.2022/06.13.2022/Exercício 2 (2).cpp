#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		int vetor[10], i=0, y=1;
		const int cont=10;
		
			for(i=0;i<cont;i++){
				printf("Insira um valor desejado:");
				scanf("%d",&vetor[i]);
				
				system("cls");
			}
			
				
		printf("Os valores inseridos foram:\n");
				
			for(i=9;i>=0;i--){
		
			printf("(%dº)%d\n\n",y,vetor[i]);
			
			y++;
			}
			
		system("pause");
	}
