#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>

	 int main(){
	 	system("color F0");
	 	setlocale(LC_ALL,"Portuguese");
	 		int c[6][6];
	 		int x,y, med = 0;	
	 		
		for(x=0;x<6;x++){
			for(y=0;y<6;y++){
					c[x][y] =0;
			}
		}
			
		for(x=0;x<6;x++){
			for(y=0;y<6;y++){
					printf("\n%d elemento da linha %d:\t", y+1, x+1);
					scanf("%d",&c[x][y]);
			}
			}
		
		int sum =0, h=0, q=0;
		for(x=0;x<6;x++){
			for(y=0;y<6;y++){
				if(y==0 || x==0){
					sum = sum + c[x][y];
					h = 1;				
				}
				if(h!=1 && x==3){
					sum = sum + c[x][y];
					q = 1;
				}
				if(h!=1 && q!= 1 && y==5){
					sum = sum + c[x][y];
				}
			}
		}
		
		printf("\n\n");
		
		printf("a) A média dos elementos que estão nessas posições:");
		printf("\n\n");
		for(x=0;x<6;x++){
			for(y=0;y<6;y++){
				if(y==0 || x==0){
					printf("*  ");	
					med = med + c[x][y];
				}
				else if(x==3){
					printf("*  ");
					med = med + c[x][y];
				}
				else if(y==5){
					printf("*  ");
					med = med + c[x][y];
				}
				else{
					printf("   ");
					
				}
			}
			printf("\n\n");
		}
		
		float mef = med/20;
		printf("É de %.2f.", mef);
		printf("\n%d", med);
		
			
		int m;
	 	printf("\n\n");
		for(x=0;x<6;x++){
			for(y=0;y<6;y++){
				if(c[x][y]>m){
					m=c[x][y];
				}
			}
		}
			
		printf("\nb) O maior elemento é %d", m);
		printf("\n\n");
		
		int param;
		printf("\nInsira um parâmetro:");
		scanf("%d",&param);
		
		for(x=0;x<6;x++){
			for(y=0;y<6;y++){
				if(c[x][y]==param){
					printf("c) O parâmetro existe na string.");
					m=11;
					x = 6;
				}
			}
		}
		
		if(m!=11){
			printf("c) O parâmetro não existe na string.");
		}
		
		int v[6];
		
		printf("\n\n");
		for(x=0;x<6;x++){
			for(y=0;y<6;y++){
				if(x==y){
					v[x] == c[x][y];
				}
			}
		}
		
		printf("\n\nd) Os valores da diagonal principal são: ");
		for(y=0;y<5;y++){
			printf("%d, ",v[y]);
		}
		printf(" e %d.", v[5]);
		
		system("pause");
		
		printf("\n\n\n\n\n");
	 }
	
