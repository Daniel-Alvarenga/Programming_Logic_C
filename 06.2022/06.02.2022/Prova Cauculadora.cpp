#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		
		float A, B, C, D, E, F, G, H, I, J, K, L,
		M, N, O, P, Q, R, S, T, U, V, W ,X, Y, Z,
		ZA, ZB, ZC, ZD, ZE, ZF, ZG, ZH, ZI, ZJ, ZK, ZL, ZM,
		A1, A2, A3, A4 ,A5, A6, A7, A8, A9, A10, A11, A12;
		
		char name[100], note[1], i, r, b, mb;
		
		
		printf("Insira seu nome:\t");
		scanf("%s",&name);
		
		printf("Prova iniciada\n\n");
		
		printf("1. 1+1=\t");
		scanf("%f",&A);
		
		printf("\n2. 1+2=\t");
		scanf("%f",&B);
		
		printf("\n3. 1+3=\t");
		scanf("%f",&C);
		
		printf("\n4. 1+4=\t");
		scanf("%f",&D);
		
		printf("\n5. 1+5=\t");
		scanf("%f",&E);
		
		printf("\n6. 1+6=\t");
		scanf("%f",&F);
		
		printf("\n7. 1+7=\t");
		scanf("%f",&G);
		
		printf("\n8. 1+8=\t");
		scanf("%f",&H);
		
		printf("\n9. 1+9=\t");
		scanf("%f",&I);
		
		printf("\n10. 1+10=");
		scanf("%f",&J);
		
		M=2;	N=3;	O=4;
		P=5;	Q=6;	R=7;
		S=8;	T=9;	U=10;
		V=11;	W=12;	X=13;
		
		if (A==M){Z=1;}
		else {Z=0; A1=1;}
		 
		if (B==N){ZA=Z+1;}
		else {ZA=Z; A2=1;} 
		
		if (C==O){ZB=ZA=1;}
		else{ZB=ZA; A3=1;}
		
		if(D==P){ZC=ZB+1;}
		else{ZC=ZB; A4=1;}
		
		if(E==Q){ZD=ZC+1;}
		else{ZD=ZC; A5=1;}
		
		if(F==R){ZE=ZD+1;}
		else{ZE=ZD; A6=1;}
		
		if(G==S){ZF=ZE+1;}
		else{ZF=ZE; A7=1;}
		
		if(H==T){ZG=ZF+1;}
		else{ZG=ZF;A8=1;}
		
		if(I==U){ZH=ZG+1;}
		else{ZH=ZG; A9=1;}
		
		if(J==V){ZI=ZH+1;}
		else{ZI=ZH; A10=1;}
		

		
	
		
		if (ZI<5){printf("A nota do Aluno %s foi I :(\n\n", name);}
		else if (ZI<7){printf("A nota do Aluno %s foi R :/\n\n", name);}
		else if (ZI<9.9){printf("A nota do Aluno %s foi B :|\n\n", name);}
		else if(ZI<10){printf("A nota do Aluno %s foi MB :)\n\n", name);}
		
		printf(" Em decimal foi %.2f\n", ZI);
		
		if (A1==1){printf("Você errou a questão 1.\n");}
		if (A2==1){printf("Você errou a questão 2.\n");}
		if (A3==1){printf("Você errou a questão 3.\n");}
		if (A4==1){printf("Você errou a questão 4.\n");}
		if (A5==1){printf("Você errou a questão 5.\n");}
		if (A6==1){printf("Você errou a questão 6.\n");}
		if (A7==1){printf("Você errou a questão 7.\n");}
		if (A8==1){printf("Você errou a questão 8.\n");}
		if (A9==1){printf("Você errou a questão 9.\n");}
		if (A10==1){printf("Você errou a questão 10.\n");}
		
		printf("Obrigado por fazer a prova %s!.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",name);
	
		
		system("pause");
	}
