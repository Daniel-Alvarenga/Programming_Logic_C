#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	system("color F0");
	setlocale(LC_ALL,"Portuguese");
	int y, u, x, i=50, p[i] ;
	float q;
	for(x=0;x<i;x++){
		y=x+1;
		printf("%d� Cliente, insira a quantidade de pizzas compradas ano anterior: \t",y);
		scanf("%d",&p[x]);
	}
	for(x=0;x<i;x++){
		y=x+1;
		u=p[x];
		q=u/10;
		if(u<10){printf("\n%d� Cliente n�o tem direito a nenhuma pizza gr�tis. \t", y);
		}
		else {printf("\n%d� Cliente tem direito a %.0f pizza(s) gr�tis. \t", y, q);}
	}
	
	printf("\n\n\n\n\n");
	
	system("pause");
	}
