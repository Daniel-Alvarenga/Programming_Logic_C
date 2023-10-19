#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("color F0");
	int mat[5][5],rows,cols,r,c;
	
	for(rows=0;rows<5;rows++){
		for(cols=0;cols<5;cols++){
				r=rows+1;
				c=cols+1;
				printf("\nElemento %d da coluna %d: ", r, c);
				scanf("%d",&mat[rows][cols]);
		}
		}
	
	
	
		system("pause");
}

