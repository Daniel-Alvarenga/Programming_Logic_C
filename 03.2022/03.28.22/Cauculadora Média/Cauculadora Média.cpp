#include<stdio.h>
#include<stdlib.h>

int main(){
	float n1, n2, n3, med;
    printf("Insira as notas:\n\n");
	
	printf("Nota 1:\n");
	scanf("%f",&n1);
	
	printf("Nota 2:\n");
	scanf("%f",&n2);
	
	printf("Nota 3:\n");
	scanf("%f",&n3);
	
	med= (n1+n2+n2)/3;
	
	printf("Mehdia:%f\n\n\n\n",med);
	
	system("pause");
}
