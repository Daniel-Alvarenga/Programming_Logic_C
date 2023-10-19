#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<conio.h>

	 int main(){
	 	system("color F0");
	 	setlocale(LC_ALL,"Portuguese");
	 	
	 	int b, c, f;
	 	
	 	printf("\nConvertendo uma temperatura em Celsius para Farenheit ou vice-versa.\n ");
	 	
	 	printf("Caso queira transformar de Celsios para farenheit digite 1 \n Caso queira transformar de farenheit para  Celsios digite 0\n");
	 	scanf("%d",& b);
	 	
	 	if(b==0){
	 		printf("Informe a temperatura em farenheit");
	 		scanf("%d",&f);
	 		
	 		c = 5*(f-32)/9;
	 		
	 		printf("Esse valor em Celsios é de %d", c);
	 		 	printf("\n\nTPA é Vida e a profa Mada e uma Joia Rara S2\n");
		 }
		 else{
		 	printf("Informe a temperatura em Celsios");
		 	scanf("%d",&c);
		 	
		 	f = (9*c/5) + 32;
		 	
		 	printf("Esse valor em farenheit é de %d", f);
		 	printf("\n\nTPA é Vida e a profa Mada e uma Joia Rara S2\n");
		 }
	 	
	 	
	 	system("pause");
	 }
