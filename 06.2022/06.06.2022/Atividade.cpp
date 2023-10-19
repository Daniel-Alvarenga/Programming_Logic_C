#include<stdlib.h>
#include<locale.h>
#include<stdio.h>

	int main(){
		setlocale(LC_ALL,"Portuguese");
		
		int q,tp,ts=0,tc=0,to=0,cd,ncr=0,nco=0,est=0;
		float ss,ssp,sc,meds,meds1;

		for(q=1;q<=10;q++){
			printf("(%d)Insira seu clube de futebol de preferência:\n1-São Paulo\n2-Corinthians\n3-Outros\n\t",q);
			scanf("%d",&tp);
			
			printf("(%d)Insira seu salário:\n\t",q);
			scanf("%f",&ss);
			
			printf("(%d)Insira sua cidade natal;\n1-RGS\n2-Outras:\n\t",q);
			scanf("%d",&cd);
			
			if(tp==1){ts++;
				ssp=ssp+ss;}
			else if(tp==2){
				tc++;
				sc=sc+ss;}
			else if(tp==3){
				to++;}
			
			if(tp>2 && cd==1){est++;}
			else{nco++;}
			
			system("cls");
		}
		
			meds=ssp/ts;
			meds1=sc/tc;
			
			printf("\nResultados:\n\n1-%d torcem para SP, %d torcem para o Corinthians e %d torcem para outro(s) times.",ts,tc,to);
			printf("\n2-A média dos salários dos São Paulinos é de %.2f já a dos Corinthianos é de %.2f.", meds, meds1);
			printf("\n3-%d São nascidos em RGS e não torcem para nenhum dos dois primeiros times",est);
			printf("\n4-Foram intrevistadas 10 pessoas\n\n\n\n\n\n\n\n");
			
		system("pause");
	}  
