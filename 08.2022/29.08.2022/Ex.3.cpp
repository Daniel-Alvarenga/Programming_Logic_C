#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	system("color F0");
	
	int constante;
	
	printf("Insira um tamanho para sua matriz:");
	scanf("%d",&constante);
	
	int rows, cols, mat[constante][constante];
	
	for(rows=0;rows<constante;rows++){
		
		for(cols=0;cols<constante;cols++){
		
				printf("\nElemento %d da coluna %d: ", rows+1, cols+1);
				scanf("%d",&mat[rows][cols]);
			}
	}

		
		for(rows=0;rows<constante;rows++){
		for(cols=0;cols<constante;cols++){
			if(rows==cols){	printf("%d\t",mat[rows][cols]);
			}
		else {printf("\t");
		}
		}
		printf("\n\n\n\n");
		}
	system("pause");
	
}
