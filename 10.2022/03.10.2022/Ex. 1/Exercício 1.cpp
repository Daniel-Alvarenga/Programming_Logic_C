#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("color F0");
	
	int x=0, co=1000;
	int na[co],n1[co],n2[co], n3[co], n4[co],nf[co],nff[co];
	
	
	do{

	printf("Insira o número do aluno:");
	scanf("%d",&na[x]);
	printf("Insira a nota 1:");
	scanf("%d",&n1[x]);
	printf("Insira a nota 2:");
	scanf("%d",&n2[x]);
	printf("Insira a nota 3:");
	scanf("%d",&n3[x]);
	printf("Insira a nota 4:");
	scanf("%d",&n4[x]);
	printf("Insira a nota da aprova final:");
	scanf("%d",&nf[x]);
	
	x++;
	}while(na[x]>0);

	for(x=0;x<0;x++){
	
		if(n1[x]<n2[x] && n1[x]<n3[x] && n1[x]<n4[x]){
			nff[x] = n2[x]+n3[x]+n4[x]+nf[x];
		}
		else if(n2[x]<n1[x] && n2[x]<n3[x] && n2[x]<n4[x]){
			nff[x] = n1[x]+n3[x]+n4[x]+nf[x];
		}
		else if(n3[x]<n2[x] && n3[x]<n1[x] && n3[x]<n4[x]){
			nff[x] = n2[x]+n1[x]+n4[x]+nf[x];
		}
		else if(n4[x]<n2[x] && n4[x]<n3[x] && n4[x]<n1[x]){
			nff[x] = n2[x]+n3[x]+n1[x]+nf[x];
		}
		else {
			nff[x] = n1[x]+n2[x]+n3[x]+nf[x];
		}
		
		if(nff[x]<40){
			printf("A mensão do aluno %d é F",na[x]);
		}
		else if(nff[x]<60){
			printf("A mensão do aluno %d é E",na[x]);
		}
		else if(nff[x]<70){
			printf("A mensão do aluno %d é D",na[x]);
		}
		else if(nff[x]<80){
			printf("A mensão do aluno %d é C",na[x]);
		}
		else if(nff[x]<90){
			printf("A mensão do aluno %d é B",na[x]);
		}
		else if(nff[x]>=90){
			printf("A mensão do aluno %d é A",na[x]);
		}
	}
	system("pause");
	
}


