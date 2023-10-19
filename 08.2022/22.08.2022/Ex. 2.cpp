#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<locale.h>

int main(){
	system("color F0");
	setlocale(LC_ALL,"Portuguese");
	char v1[10];
	int x, v=0;
	
	printf("Insira 10 letras minúsculas:\n");
	
	for(x=0;x<10;x++){
		scanf(" %c",&v1[x]);
		
	printf("\n");
		
	if(v1[x]!='a' && v1[x]!='e' && v1[x]!='i' && v1[x]!='o' && v1[x]!='u'){
	v++;
	}
    }
	
	printf("O vetor possui %d consoantes inseridas.", v);
	
	system("pause");
	}

