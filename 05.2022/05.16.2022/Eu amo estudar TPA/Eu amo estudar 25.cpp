#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
     
     int cont=1;
     while(cont<=25){
     	printf("Eu AMO estudar L�gica de Programa��o %d\n", cont);
     	
        cont++;
     }
     
    system("pause");
}
