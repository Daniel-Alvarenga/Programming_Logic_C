#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

	int main () {
	setlocale(LC_ALL,"Portuguese");

    int num1, num2;
    float res1, res2, res3, res4, res5;
    
    printf("Insira um n�mero:\t");
    scanf("%d",&num1);
    printf("Insira outro n�mero:\t");
    scanf("%d",&num2);
    
    res1=num1+num2;
    
    res2=num1-num2;
    
    res3=num1*num2;
    
    res4=num1/num2;
    
    res5=num1%num2;
    
    printf(" A soma dos n�meros � de %.2f\nA subtra��o dos n�meros � de %.2f\nO produto dos dois n�meros � de %.2f\nO quociente dos dois n�meros inseridos � de %.2f\nE o modulo dos dois n�meros � de %.2f",res1,res2,res3,res4,res5);
    
    system("pause");
	}

