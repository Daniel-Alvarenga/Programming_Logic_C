#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		char n;
		
		printf("Insira um número de 1 a 12:\t");
		scanf(" %c", &n);
		
		switch(n){
			case '1':{printf("Janeiro\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '2':{printf("Fevereiro\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '3':{printf("Março\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '4':{printf("Abril\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '5':{printf("Maio\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '6':{printf("Junho\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '7':{printf("Julho\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '8':{printf("Agosto\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '9':{printf("Setembro\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
		case '10':{printf("Outubro\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '11':{printf("Novembro\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			case '12':{printf("Dezembro\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				break;
			}
			
			default: printf("VALOR INVÁLIDO!");
			
	}
			
		system("pause");
			
	}
