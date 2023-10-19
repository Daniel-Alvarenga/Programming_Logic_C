#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1,n2,s,sub,div,mult;
	printf("Insira um numero querido usuario:");
	scanf("%d",&n1);
	printf("Insira um outro numero querido usuario:");
	scanf("%d",&n2);
	
	s=n1+n2;
	sub=n1-n2;
	div=n1/n2;
	mult=n1*n2;
	printf("\nresultados das operacoes:\n\n");
	printf("Soma:%d\n\n",s);
	printf("subtracao:%d\n\n",sub);
	printf("divisao:%d\n\n",div);
	printf("multiplicacao:%d\n\n",mult);
	
	system("pause");
}
