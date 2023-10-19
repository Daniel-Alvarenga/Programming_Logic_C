#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
			int vetor[20], i=0, y=1, vetor1[20], vetor2[20], par=1, impar=1;
		const int cont=20;
		
			for(i=0;i<cont;i++){
				printf("[%d]Insira um valor desejado:",y);
				scanf("%d",&vetor[i]);
				
				system("cls");
				y++;
		
			}
			
			for(i=0;i<cont;i++){
			if(vetor[i]%2==0){scanf("%d",&vetor[i]);
			}
			else{scanf("%d",&vetor[i]);
		}
	}
	
		printf("Os valores inseridos foram:\n");
				
			for(i=0;i<cont;i++){
		
			printf("Pares:%d",vetor1[par]);
			printf("Ímpares",vetor2[impar]);
			
		par++;
		impar++;
		}
				
		system("pause");
	}
