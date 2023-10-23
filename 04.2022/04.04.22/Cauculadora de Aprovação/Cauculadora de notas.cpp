#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 
int main () {setlocale(LC_ALL,"Portuguese");float A, B, C, med;	printf("Olá querido aluno\n\n\n");printf("Insira suas notas e vereifique seu estado quanto a ser aprovado ou reprovado:\n");printf ("Nota 1:");scanf("%f", &A);printf ("Nota 2:");scanf("%f", &B);printf ("Nota 3:");scanf("%f", &C);med=(A+B+C)/3;if(med>=6){printf("\nNão fez mais que a obrigacação (APROVADO)Sua Média foi :%.2f \n\n\n\n\n\n\n\n",med);}else {printf("SEM CELULAR UM MÊS (REPROVOU) Sua Média foi : %.2f \n\n\n\n\n\n\n\n",med);}system("pause");}
