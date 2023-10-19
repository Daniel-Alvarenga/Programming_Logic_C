#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("color F0");
	int mat[3][3],rows,cols,r,c;
	
	for(rows=0;rows<3;rows++){
		for(cols=0;cols<3;cols++){
				r=rows+1;
				c=cols+1;
				printf("\nElemento %d da coluna %d: ", r, c);
				scanf("%d",&mat[rows][cols]);
		}
		}
	
		printf("\n\n");
	for(rows=0;rows<3;rows++){
		for(cols=0;cols<3;cols++){
				printf("%d\t", mat[rows][cols]);
		}
		printf("\n\n\n\n");
		}
		
		system("pause");
}
