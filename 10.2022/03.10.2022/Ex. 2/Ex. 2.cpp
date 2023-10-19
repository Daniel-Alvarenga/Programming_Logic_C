#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		int i, num, tema ; 
		float r, a, n1, n2, n3, n4, soma;
		float programa (float a, float b, float c, float d);
		char senha[50] = "";
		char sen[50] = "";
		
		sen[0]='s';
		sen[1]='e';
		sen[2]='n';
		sen[3]='h';
		sen[4]='a';
		
		printf("Senha:\t");
		scanf(" Senha : %s",&senha);
		
		for(i=0;i<50;i++){
			printf("%c",senha[i]);
			printf("%c",sen[i]);
		}

		
		do{
			printf("Tema - 1 Claro - 2 Escuro - 3 Executar:");
			scanf("%d",& tema);
			
			if( tema == 1){
				system("color F0");
			}
			else if(tema == 2){
				system("color 0F");
			}
			else if(tema == 4){
				system("color 0A");
				tema = 3;
			}
		}while(tema != 3);
		
		system("cls");
		printf("Insira a quantidade de vezes que você quer rodar o programa: ");
		scanf("%d",&num);
		
		for(a=1;a<=num;a++){
			
			printf("\n\nInsira os números desejados: ");
			printf("\n1º nº: ");
			scanf("%f",& n1);
			printf("\n2º nº: ");
			scanf("%f",& n2);
			printf("\n3º nº: ");
			scanf("%f",& n3);
			printf("\n4º nº: ");
			scanf("%f",& n4);
			
			soma = programa (n1, n2, n3, n4);
			
			printf("A soma dos três maiores números inseridos é %2f.", soma);
		
			printf("\n\n");
			system("pause");
			system("cls");
		}
	}
	
	float programa (float a, float b, float c, float d){
		float sum;
		
		if(a<=b && a<=c && a<=d){
			sum = b + c + d;
		}
		else if(b<=a && b<=c && b<=d){
			sum = a + c + d;
		}
		else if(c<=b && c<=a && c<=d){
			sum = b + a + d;
		}
		else if(d<=b && d<=c && d<=a){
			sum = b + c + a;
		}
		
		return sum;
	}
