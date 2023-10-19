#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>


	int main(){
		system("color F0");
		setlocale(LC_ALL,"Portuguese");
		int mat[4][4], l, c, val=0;
		
		printf("Alimente sua matriz, ela está com fome:");
		
		for(l=0;l<4;l++){
			for(c=0;c<4;c++){
				printf("\nElemento %d da coluna %d:", l+1, c+1);
				scanf("%d",&mat[l][c]);
				
				if(mat[l][c]>10){
					val++;
				}
			}
		}
		
		printf("\nNa matriz foram inseridos %d valores maiores que 10", val);
		
		system("pause");
	}
