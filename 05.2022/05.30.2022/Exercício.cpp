#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		int i,f,x,MOD;
		
	    printf("Insira o n�mero de in�cio:\n\t");
	    scanf("%d",&i);
	    
	    printf("Insira o n�mero final:\n\t");
	    scanf("%d",&f);
		
		for(x=i;x<=f;x++){
		
		MOD=x%2;
		
		if(MOD!=0){
		printf("%d\n",x);
		}
		
		}
		system("pause");
	}

