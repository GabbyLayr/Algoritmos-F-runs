//Escrever um programa que declare um vetor de reais e leia e apresentar em tela as notas de 30 alunos.


#include<stdio.h> //biblioteca de entrada e sa�da: pintf e scanf
#include<locale.h> //biblioteca para utiliza��o de acentos gr�ficos: setlocale

int main(){
	setlocale (LC_ALL, "portuguese"); //acentua��o gr�fica 
	float notas[5]; // armazena n�meros reais com precis�o simples
    int contador, i;
//ENTRADA:
	printf("Declara��o das notas dos alunos:\n");

	for (contador = 0; contador < 30; contador++){
		  printf("Digite a nota:\n", contador + 1);
		    scanf("%f", &notas[i]);
			}
	printf("\nNota declarada aluno %d: %f\n", contador + 1, notas[i]);
return 0;
}
