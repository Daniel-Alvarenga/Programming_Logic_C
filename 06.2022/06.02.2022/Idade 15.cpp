#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int age, total, cont=1;
	float media;
	
	total=0;
	
	while(cont<=15){
		
		printf("insira sua idade:");
		scanf("%d",&age);
		
		total=age+total;
		
		cont++;
	}
	
	media=total/15;

printf("A média das idades inseridas é de: %.2f", media);

system("pause");

}

