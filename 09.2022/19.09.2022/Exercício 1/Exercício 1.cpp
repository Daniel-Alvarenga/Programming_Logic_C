#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	system("color F0");
	
	int a, b, c, d, e;
	int e1(int x);
	int e2(int x);
	int e3(int x);
	void e4(int x);
	
	
	printf("\nInsira um valor para A:\t");
	scanf("%d",&a);
	
	b= e1(a);
	
	printf("\nO dobro de A é %d.",b);
	
	c= e2(a);
	
	printf("\n\nO sucessor de A é %d.",c);
	
	d= e3(a);
	
	printf("\n\nO antecessor de A é %d.",d);
	
	e4(a);
	
	system("pause");
	
}

int e1(int x){
	
	int z;
	
	z=2*x;
	
	
	return z;
}

int e2(int x){
	
	int z;
	
	z=x+1;
	
	
	return z;
	
}

int e3(int x){
	
	int z;
	
	z=x-1;
	
	
	return z;
	
}

void e4(int x){
	
	if(x<0){
		printf("\n\nA é um número negativo.\n\n\n\n\n");
	}
	else if (x>0){
		printf("\n\nA é um número positivo.\n\n\n\n\n");
	}
	else {
		printf("\n\nA é igual a 0\n\n\n\n\n");
	}
	
}
