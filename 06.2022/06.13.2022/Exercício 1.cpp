#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
			int cont=19, var[cont],y;
			float calc;
			
		printf("Insira 20 valores:\n");
		
		for(y=0;y<=cont;y++){
			scanf("%d",&var[y]);
			
			system("cls");
		}
		
		printf("Os valores inseridos foram:");
		
		for(y=0;y<=cont;y++){
			calc=var[y]%2;
			
		if(calc==0){printf("\nPar:%d",var[y]);
		}
		else{printf("\nÍmpar:%d",var[y]);
		}

		}
		
		printf(".\n\n");
		
		system("pause");
	}
