#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		int i,f,x,MOD;
		
	    printf("Insira o número de início:\n\t");
	    scanf("%d",&i);
	    
	    printf("Insira o número final:\n\t");
	    scanf("%d",&f);
		
		for(x=i;x<=f;x++){
		
		MOD=x%2;
		
		if(MOD!=0){
		printf("%d\n",x);
		}
		
		}
		system("pause");
	}

