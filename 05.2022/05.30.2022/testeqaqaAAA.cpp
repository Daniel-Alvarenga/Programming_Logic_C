#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
	int x=0, cor=0, sp=0,  ot=0, tm, cd, nasrgs=0, nasot=0, est=0;
	float sal,totsal=0, medsal, totsal2=0, medsal2;

    for(x=0;x<10;x++){
    	
    	printf("Insira 1 para São Paulo (time)\n2Para Corinthians ou\n3Para outro time:\n\t");
    	scanf("%d",&tm);
    	if(tm=1){sp++;}
    	else if(tm=2){cor++;}
    	else if(tm=3){ot++;}
    	else printf("\n\nValor incorreto, reinicie e tente novamente");
    	
    	
    	printf("Insira 1 para nascido(a) em Rio Grande da Serra ou\n2Para nascido(a) em outra cidade:\n\t");
    	scanf("%d",&cd);
    	if(cd=1){nasrgs++;}
    	else if(cd=2){nasot++;}
    	else printf("Valor incorreto, reinicie e tente novamente");
    	
    	printf("Insira seu salário:\t\n");
    	scanf("%f",&sal);
    	
    	if (tm=1){totsal=totsal+sal;}
		else if(tm=2){totsal2=totsal+sal;}  
		 	
    	if(cd!=1 && tm!=1){est++;}
    	
		} 
		
		medsal=totsal/cor;
		medsal2=totsal2/sp;
		
	    printf(" 10 ENTREVISTAS, %d nascidso em RGS e %d nascidos em outras cidades.", nasrgs, nasot);
	    printf("%d torcedores do SP, %d torcedores do Corinthians e %d de outros times.", sp, cor, ot);
	    printf("A média dos salários dos torcedores do SP e do Cporinthians são respectvcamente: %d e %d", medsal, medsal2);
	    printf("%d nascidos em RGS não torcem nem para o Corinthians nem para o SP");
		
		system("pause");
	}

