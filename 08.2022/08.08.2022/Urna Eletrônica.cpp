#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>

	 int main(){
	 	setlocale(LC_ALL,"Portuguese");
	 	int q, q1=0, q2=0, q3=0, qn=0, qb=0, conf;

		printf("URNA ELETRÔNICA");
		
		do{
	 	printf("\n\n\nInsira o número do seu candidato para votar no mesmo;\n- 11 para Daniel R. Alvarenga;\n- 47 para Vitor Eduardo S. de Carvalho;\n- 15 para Yan dos S. Ramos;\n- 1 para voto Branco ou;\n- 0 para voto Nulo\n\n");
	 	scanf("%d", &q);
	 	
	 	printf("\n");
	
		 if(q==11){
		 	printf("Confirmar voto em Daniel R. Alvarenga?\nDigite 0 para sim, ou 1 para Não:\t ");
		 	scanf("%d",&conf);
		
				if(conf==0){
					q1++;
					printf("Voto em Daniel R. Alvarenga Confirmado.\a\a\a");
					}
					else{printf("\nOk, voto cancelado.");
				} printf("\n\n"); system("pause");}
				
		 else if(q==47){
		 	printf("Confirmar voto em Vitor Eduardo S. de Carvalho?\nDigite  0 para sim, ou 1 para Não:\t ");
		 	scanf("%d",&conf);
		
				if(conf==0){
					q2++;
					printf("Voto em Vitor Eduardo S. de Carvalho Confirmado.\a\a\a");
				}
				else{printf("\nOk, voto cancelado.");
				} printf("\n\n"); system("pause");}
		  else if(q==15){
		 	printf("Confirmar voto em Yan dos S. Ramos?\nDigite  0 para sim, ou 1 para Não:\t ");
		 	scanf("%d",&conf);
		
				if(conf==0){
					q3++;
					printf("Voto em Yan dos S. Ramos Confirmado.\a\a\a");
				}
				else{printf("\nOk, voto cancelado.");
				} printf("\n\n"); system("pause");}
		 else if(q==0){
		 	printf("Confirmar voto Nulo?\nDigite  0 para sim, ou 1 para Não:\t ");
		 	scanf("%d",&conf);
		
				if(conf==0){
					qn++;
					printf("Voto Nulo Confirmado.\a\a\a");
				}
				else{printf("\nOk, voto cancelado.");
				} printf("\n\n"); system("pause");}
		 else if(q==15){
		 	printf("Confirmar voto Branco?\nDigite  0 para sim, ou 1  para Não:\t ");
		 	scanf("%d",&conf);
		
				if(conf==0){
					qb++;
					printf("\nVoto Branco Confirmado. \a\a\a");
				}
				else{printf("Ok, voto cancelado.");
				} printf("\n\n"); system("pause");}
		else {printf("O valor inserido é inválido!");
			}		
				system("cls");
				
			
		 }while(q!=-1);      
		 
		 printf("Resultado da Votação:\nDaniel Rocha Alvarenga (11):            %d",q1); 
		 printf("\nVitor Eduardo Silva de Carvalho (47):   %d",q2); 
		 printf("\nYan dos Santos Ramos (15):              %d",q3); 
		 printf("\nVotos Nulos (0):                        %d",qn); 
		 printf("\nVotos Brancos: (1):                     %d\n\n\n\n\n\n\n\n\n\n",qb); 
		 
	 	system("pause");
	 }

