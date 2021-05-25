//Escrever um programa que declare um vetor de reais e leia e apresentar em tela as notas de 30 alunos.


#include<stdio.h> //biblioteca de entrada e saída: pintf e scanf
#include<locale.h> //biblioteca para utilização de acentos gráficos: setlocale

int main(){
	setlocale (LC_ALL, "portuguese"); //acentuação gráfica 
	float notas[5]; // armazena números reais com precisão simples
    int contador, i;
//ENTRADA:
	printf("Declaração das notas dos alunos:\n");

	for (contador = 0; contador < 30; contador++){
		  printf("Digite a nota:\n", contador + 1);
		    scanf("%f", &notas[i]);
			}
	printf("\nNota declarada aluno %d: %f\n", contador + 1, notas[i]);
return 0;
}
