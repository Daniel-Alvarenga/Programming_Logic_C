#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>

	 int main(){
	 	system("color F0");
	 	setlocale(LC_ALL,"Portuguese");
	 	
	 	void leitura(void);
	 	
	 	leitura();
	 	
	 	printf("Obrigado por utilizar nosso sitema!\nDesenvolvido por: Daniel Alvarenga e Vitor Eduardo - 2022 ");
	 	
	 	system("pause");
	 }
	 
	 void leitura (void){
	 	
	 	char defmencao (int x);
	 	void imprimir(int num, int notfil, char mencaoA);
	 	
	 	int cod = 1, n1, n2, n3, n4, nf, nota;
	 	char mencao;
	 	
	 	do{
	 		printf("\nInsira o código do aluno: ");
	 		scanf("%d",&cod);
	 	
	 		printf("\n\nAs notas de 1 até 4 recebem valores de 0 até 20\nNota da prova final recebe de 0 a 40.");
	 		
	 		printf("\n\nInsira a 1º nota: ");
	 		scanf("%d",&n1);
	 		printf("\nInsira 2º nota: ");
	 		scanf("%d",&n2);
	 		printf("\nInsira 3º nota: ");
	 		scanf("%d",&n3);
	 		printf("\nInsira 4º nota: ");
	 		scanf("%d",&n4);
	 		
	 		printf("\nInsira a nota da prova final: ");
	 		scanf("%d",&nf);
	 		
	 		if(n1<=n2 && n1<=n3 && n1<=n4 ){
	 			nota  = n2+n3+n4+nf;
			 }
			else if(n2<=n1 && n2<=n3 && n2<=n4 ){
	 			nota  = n1+n3+n4+nf;
			 }
			else if(n3<=n1 && n3<=n2 && n3<=n4 ){
	 			nota  = n1+n2+n4+nf;
			 }
			else if(n4<=n1 && n4<=n2 && n4<=n3 ){
	 			nota  = n1+n3+n3+nf;
			 }

			
			mencao = defmencao (nota);
			
			imprimir(cod, nota, mencao);
			
		 }while(cod >=0);
	 	
	 	
	 }
	 
	 char defmencao (int x){
	 	
	 	char menc;
	 	
	 	if(x>=90){
	 		menc='A';
		 }
		else if(x>=80){
			menc='B';
		}
		else if(x>=70){
			menc='C';
		}
		else if(x>=60){
			menc='D';
		}
	 	else if(x>=40){
			menc='E';
		}
		else if(x>=0){
			menc='F';
		}
		
	 	return menc;
	 }
	 
	 void imprimir(int num, int notfil, char mencaoA){
	 	printf("\nO aluno de código %d obteve:\n\nNota final: %d\nMenção: %c", num, notfil, mencaoA);
	 	
	 	int x = notfil;
	 	
	 	printf("\n");
	 	
	 	if(x>=90){
	 		printf("\nExcelente! \3");
		 }
		 
		else if(x>=80){
			printf("\nParábens! \2");
		}
		else if(x>=70){
			printf("\nMuito bem! :)");
		}
		else if(x>=60){
			printf("\nPoderia ser melhor! :/");
		}
	 	else if(x>=40){
			printf("\nOOOUUUU Rasificou-se :(! \3");
		}
		else if(x>=0){
		    printf("\nSem comentários...");
		}
		
		printf("\n\n\n");
		
		system("pause");
		system("cls");
	 }
