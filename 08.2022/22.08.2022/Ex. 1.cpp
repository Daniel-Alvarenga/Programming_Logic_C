#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>

 int main(){
 	system("color F0");
 	setlocale(LC_ALL,"Portuguese");
 	int x, v1[5], v2[5], vs[5];
 	
 	printf("Insira 5 valores:\n\n");
 	for(x=0;x<5;x++){
 		scanf("%d",&v1[x]);
	 }
	 printf("Insira mais 5 valores:\n\n");
 	for(x=0;x<5;x++){
 		scanf("%d",&v2[x]);
	 }
 	for(x=0;x<5;x++){
 	vs[x]=v1[x]+v2[x];
	 }
	 printf("\n");
 	for(x=0;x<5;x++){	
 	printf("%d - ",vs[x]);
	 }
 	system("pause");
 }
