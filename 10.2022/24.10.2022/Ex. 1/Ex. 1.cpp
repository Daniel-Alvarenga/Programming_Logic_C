#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>

	int main(){
		system("color F0");
		setlocale(LC_ALL,"Portuguese");
	
		void compras();
	
		compras();

		system("pause");
	
	}
	
	void imprimir(void){
		
		system("cls");
		printf("\n	Código  	Produto	       Preço R$ \n\n");
		printf("	A        Refrigerante             3,50\n");
		printf("	B        Casquinha Simples        4,00\n");
		printf("	C        Casquinha Dupla          5.50\n");
		printf("	D        Sundae                   7,50\n");
		printf("	E        Banana Split             9,00\n\n");
	
    }
    
    void compras(){
    	void imprimir();
    	void resultados(int va, int vb, int vc, int vd, int ve);
    	char produto;
    	int verificacao = 1, verificacao2 = 1, quantidade;
    	int p1 =0, p2=0, p3=0, p4=0, p5 = 0;
    	float valor = 0;
    	
    	do{
    	
    	imprimir();
	    	do{
			printf("\nInsira o código do produto:");
	    	scanf(" %s",&produto);
	    	
	    	if(produto=='a' || produto =='A'){
	    		printf("\nInsira a quantidade desejada de Refrigerantes:");
	    		scanf("%d",&quantidade);
	    		p1 = p1 + quantidade;
	    		valor = valor + (quantidade*3.5);
			}
			else if(produto=='b' || produto =='B'){
	    		printf("\nInsira a quantidade desejada de Casquinha Simples:");
	    		scanf("%d",&quantidade);
	    		p2 = p2 + quantidade;
	    		valor = valor + (quantidade*4);
			}
			else if(produto=='c' || produto =='C'){
	    		printf("\nInsira a quantidade desejada de Casquinha Duplas:");
	    		scanf("%d",&quantidade);
	    		p3 = p3 + quantidade;
	    		valor = valor + (quantidade*5.5);
			}
			else if(produto=='d' || produto =='D'){
	    		printf("\nInsira a quantidade desejada de Sundaes:");
	    		scanf("%d",&quantidade);
	    		p4 = p4 + quantidade;
	    		valor = valor + (quantidade*7.5);
			}
			else if(produto=='e' || produto =='E'){
	    		printf("\nInsira a quantidade desejada de Bananas Splits:");
	    		scanf("%d",&quantidade);
	    		p5 = p5 + quantidade;
	    		valor = valor + (quantidade*9);
			}
			else{
				printf("Produto não encontrado!");
				
			}
			
			printf("\n\n1 para adicionar outro(s) produto(s)\n2 para finalizar a compra\nInsira:\t");
			scanf("%d",&verificacao);
			
		}while(verificacao==1);
		
		printf("\nValor a pagar: R$%.2f\n\n", valor);
		
		valor = 0;
		
		printf("\n\n1 para adicionar outra(s) compra(s)\n2 para finalizar vendas do dia\nInsira:\t");
		scanf("%d",&verificacao2);
		
		}while(verificacao2==1);
		
		resultados(p1, p2, p3, p4, p5);
	}
	
	void resultados(int va, int vb, int vc, int vd, int ve){
		
		float vf = (va*3.5) + (vb*4) + (vc*5.5) + (vd*7.5) + (ve*9);
		printf("\nForam comprados no total nesse dia:\n");
		
		if(va!=0){
			printf("\nProduto(s): %d Refrigerante(s)\nTotal:      R$ %.2f", va, va*3.5);
		}
		if(vb!=0){
			printf("\nProduto(s): %d Casquinha Simple(s)\nTotal:      R$ %d,00", vb, vb*4);
		}
		if(vc!=0){
			printf("\nProduto(s): %d Casquinha dupla(s)\nTotal:      R$ %.2f", vc, vc*5.5);   
		}
		if(vd!=0){
			printf("\nProduto(s): %d Sundae(s)\nTotal:      R$  %.2f", vd, vd*7.5);
		}
		if(ve!=0){
			printf("\nProduto(s): %d Banana Split(s)\nTotal:      R$ %d,00", ve, ve*9);
		}
		
		if(va==0 && vb==0 && vc==0 && vd==0 && ve== 0){
			printf("Infelizmente nada foi comprado hoje. :(");
		}
		printf("\n");
		printf("\n\nValor total: R$ %.2f.",vf);
	}
		
    
