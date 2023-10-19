#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("color F0");
	
	int constante;
	
	printf("Insira um tamanho para x:");
	scanf("%d" ,&constante);
	
	int rows, cols=constante;
	char mat[constante][constante];
	
	for(rows=0;rows<constante;rows++){
		for(cols=0;cols<constante;cols++){
			if(rows==cols){
				mat[rows][cols]='x';
				
			}
			else{
				mat[rows][cols]=' ';
			}
		}
		}
		
			
	for(rows=0;rows<constante;rows++){
		cols--;
		mat[rows][cols]='x';
		}
		
	
		printf("\n\n");
	for(rows=0;rows<constante;rows++){
		for(cols=0;cols<constante;cols++){
				printf("%c \t ", mat[rows][cols]);
		}
		printf("\n\n\n\n");
		}
	
	system("pause");
	
}
