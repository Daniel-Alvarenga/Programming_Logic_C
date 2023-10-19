#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>
#include<conio.h>
#include<windows.h>

		int main (){
			setlocale(LC_ALL,"Portuguese");
			
			system("color F0");
			
			int y, xv=0, randv=0, ev=0, randi, d=1, h, z=50;
			
			srand(time(NULL));
			
			do{
				
				system("color F0");
				
				printf("Você irá jogar jokenpô com o computador.\n");
				printf("\n\n\n1 para Pedra\n2 para Tesoura\n3 para Papel ou\n0 para sair e ver o RANKING.\n\nInsira o valor desejado:\t");
				scanf("%d",& y);
				
				if(y==0){
					printf("Ok");
				}
				
				else{
				
				if (y!=1 && y!=2 && y!=3){
					printf("Valor iserido inválido, reinicie o jogo");
				}
				
				randi = 1+rand()%3;
				
				printf("O valor jogado pelo computador foi de %d ou seja, ", randi);
		
				
				if( randi==1){
					printf("Pedra.");
				}
				else if( randi==2){
					printf("Tesoura.");
				}
				else if( randi==3){
					printf("Papel.");
				}
		
				
				if( y==1 && randi==1){
					ev++; printf("\nFoi empate \2\n\n");
				}
				else if( y==1 && randi==2){
					xv++; system("color F1"); Sleep(z);system("color 1F");Sleep(z); printf("\n\n!!!VOCÊ GANHOU A RODADA!!!\n\n");
				}
				else if( y==1 && randi==3){
					randv++; system("color FC"); printf("\n\nVOCÊ PERDEU A RODADA\n\n!\n\n");
				}
				else if( y==2 && randi==1){
					randv++; randv++; system("color FC"); printf("\n\nVocê PERDEU a rodada!\n\n");
				}
				else if( y==2 && randi==2){
					ev++; printf("\n\nFoi empate \2\n\n");
				}
				else if( y==2 && randi==3){
					xv++; system("color F1"); system("color 1F"); printf("\n\n!!!VOCÊ GANHOU A RODADA!!!\n\n");
				}
				else if( y==3 && randi==1){
					xv++; system("color F1");system("color 1F"); printf("\n\n!!!VOCÊ GANHOU A RODADA!!!\n\n");
				}
				else if( y==3 && randi==2){
					randv++; randv++; system("color FC"); printf("\n\nVocê PERDEU a rodada!\n\n");
				}
				else if( y==3 && randi==3){
					ev++; printf("\n\nFoi empate \2\n\n");
			}
				
				
				
				d++;
				
				system("pause");
				system("cls");
			}}while(y!=0);
			
				system("cls");
				
				if(xv+randv!=0){
				printf("\n\nRanking atual: Você      Máquina\n\n		%d          %d    ", xv, randv);}
				
				else {
					printf("Não houve um vencedor.");
				}
				
				if(xv>randv){
					printf("\n\nComo se pode observar, você ganhou do computador nessas %d jogadas\n\n\n\n\n\n", d);
				}
				else if(xv<randv){
					printf("\n\nComo se pode observar, o computador ganhou de você nessas %d jogadas\n\n\n\n\n\n", d);
				}
				
				else ("\n\nHouve um empate.\n\n\n\n\n\n");
				
				printf("\n\n\n\n\n\n");
			
			system("pause");
		}
