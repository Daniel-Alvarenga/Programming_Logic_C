#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int qr=0, qrp=0, qrm=0, qot=0, und, undin, city;
	
	printf("Insira a quantidade de intrevistados:\t");
	scanf("%d",&undin);
	
	int cont=1;
	while(cont<=undin){
		printf("Insira sua cidade de nascimento:\n1 para Rio Grande da Serra\n2 para Ribeirão Pires\n3 para Mauá ou\n 4 para outro local:\n\t");
		scanf("%d",&city);
		
	
	switch(city){
		case 1:{
			qr=qr+1;
			break;
		}
		
		case 2:{
			qrp=qrp+1;
			break;
		}
		
		case 3:{
			qrm=qrm+1;
			break;
		}
		
		case 4:{
			qot=qot+1;
			break;
		}
	}
	
	cont++;
	}
	
	printf("Com %d entrevistados, teremos:%d intrevistados nascidos em Rio Grande da Serra\n%d intrevistados nascidos em Ribeirão Pires\n%d intrevistados nascidos em Mauá e\n%d intrevistados nascidos em outros locais.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", undin, qr, qrp, qrm, qot);
	
	system("pause");
}
