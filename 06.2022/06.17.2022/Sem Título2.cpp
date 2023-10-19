#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		
		float A, B, C, D, E, F, G, H, I, J, K, L,
		M, N, O, P, Q, R, S, T, U, V, W ,X, Y, Z,
		ZA, ZB, ZC, ZD, ZE, ZF, ZG, ZH, ZI, ZJ, ZK, ZL, ZM,
		A1, A2, A3, A4 ,A5, A6, A7, A8, A9, A10, A11, A12;
		
		char name[100], note[2], i, r, b, mb;
		
		
		printf("Insira seu nome:\t");
		scanf(" %s",&name);
		
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
		
		printf("\n11. 1+11=");
		scanf("%f",&K);
		
		printf("\n12. 1+12=");
		scanf("%f",&L);
		
		M=2;	N=3;	O=4;
		P=5;	Q=6;	R=7;
		S=8;	T=9;	U=10;
		V=11;	W=12;	X=13;
		
		if (A==M){Z=0.83;}
		else {Z=0; A1=1;}
		 
		if (B==N){ZA=Z+0.83;}
		else {ZA=Z; A2=1;} 
		
		if (C==O){ZB=ZA=0.83;}
		else{ZB=ZA; A3=1;}
		
		if(D==P){ZC=ZB+0.83;}
		else{ZC=ZB; A4=1;}
		
		if(E==Q){ZD=ZC+0.83;}
		else{ZD=ZC; A5=1;}
		
		if(F==R){ZE=ZD+0.83;}
		else{ZE=ZD; A6=1;}
		
		if(G==S){ZF=ZE+0.83;}
		else{ZF=ZE; A7=1;}
		
		if(H==T){ZG=ZF+0.83;}
		else{ZG=ZF;A8=1;}
		
		if(I==U){ZH=ZG+0.83;}
		else{ZH=ZG; A9=1;}
		
		if(J==V){ZI=ZH+0.83;}
		else{ZI=ZH; A10=1;}
		
		if(K==W){ZJ=ZI+0.83;}
		else{ZJ=ZI; A11=1;}
		
		if(L==X){ZK=ZJ+0.83;}
		else{ZK=ZJ; A12=1;}
		
		if(ZK<6){printf("A nota do Aluno %s foi I", name);}	
		else if(ZK>=6){printf("A nota do Aluno %s foi R", name);}	
		else if(ZK>=8,5){printf("A nota do Aluno %s foi M", name);}
		else if(ZK==10){printf("A nota do Aluno %s foi MB", name);}
		
		printf("A nota do Aluno %s foi %.2s", name);
		
		if (A1==1){printf("Você errou a questão 1.");}
		if (A2==1){printf("Você errou a questão 2.");}
		if (A3==1){printf("Você errou a questão 3.");}
		if (A4==1){printf("Você errou a questão 4.");}
		if (A5==1){printf("Você errou a questão 5.");}
		if (A6==1){printf("Você errou a questão 6.");}
		if (A7==1){printf("Você errou a questão 7.");}
		if (A8==1){printf("Você errou a questão 8.");}
		if (A9==1){printf("Você errou a questão 9.");}
		if (A10==1){printf("Você errou a questão 10.");}
		if (A11==1){printf("Você errou a questão 11.");}
		if (A12==1){printf("Você errou a questão 12.");}
		
		
		system("pause");
	}
