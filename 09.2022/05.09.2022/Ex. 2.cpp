#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>


	int main(){
		system("color F0");
		setlocale(LC_ALL,"Portuguese");
		int mat[5][5], l, c, l1=50, c1, x;
		
		printf("Insira um valor para X:\t");
		scanf("%d",&x);
		printf("Alimente sua matriz com números, ela está com fome de matemática:\n");
		
		for(l=0;l<5;l++){
			for(c=0;c<5;c++){
				printf("\nElemento %d da coluna %d:\t", l+1, c+1);
				scanf("%d",&mat[l][c]);
			}
		}
		
		for(l=0;l<5;l++){
			for(c=0;c<5;c++){
				if(mat[l][c]==x){
					l1=l;
					c1=c;
				}
			}
		}
		
		if(l1!=50){
		printf("\n\nO valor X foi encontrado dentro de sua matriz nas cordenadas de: linha %d e coluna %d.\n\n\n\n\n\n", l1+1, c1+1);
		} else{printf("Valor não encontrado.");
		}
		
		system("pause");
	}
