#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main (){
		system("color F0");
		setlocale(LC_ALL,"Portuguese");
		int quest[12], er[12]={0}, x, y, note=0;
		int const MAX=12;
	 	char name[100];
	
	printf("Insira seu Nome:\t");
	fgets(name, 100, stdin);
	
		for(x=0;x<MAX;x++){
			y=x+1;
			printf("\n\nQuestão-%d\n1+%d=\t",y,x);
			scanf("%d",&quest[x]);
		}
	
		for(x=0;x<MAX;x++){
			y=x+1;
			if(quest[x]==y){note++;}
			else {er[x]=quest[x];}
		}
		
		if(note==12){printf("\n\nO aluno %s teve nota MB. \3\n\n\n\n\n", name);}	
		else if(note>=8){printf("\n\nO aluno %s teve nota M. \2", name);}
		else if(note>=6){printf("\n\nO aluno %s teve nota R.", name);}	
		else if(note<6){printf("\n\nO aluno %s teve nota I.", name);}
		
		if(er[0]!=0||er[1]!=0||er[2]!=0||er[3]!=0||er[4]!=0||er[5]!=0||er[6]!=0||er[7]!=0||er[8]!=0||er[9]!=0||er[10]!=0||er[11]!=0){
		printf("\n\nVocê errou a(s) questão(s):"); for(x=0;x<MAX;x++){
			y=x+1;
			if(er[x]!=0){printf("\t\n%d - Já que o resultado era %d e não %d.", y, y, er[x]);}
			} 
			printf("\n\n\n\n\n");
		}
		
		system("pause");
	}
	
	
