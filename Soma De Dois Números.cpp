//sintese
//objetivo: Leia dos valores inteiros, no caso para variaveis A e B.
//A seguir, calcule a soma entre elas e atribua a variavel SOMA.
//A seguir escrever o valor dessa variavel.

#include<stdio.h>
int main (){
	//declaração
	int A, B, SOMA;
	//corpo principal
	printf ("Digite a nota A: "); //apresentar em tela
	scanf ("%d", &A); //ler dado da  variavel A
	printf ("Digite a nota B: "); // apresentar em tela
	scanf ("%d", &B); //ler dado da variavel B
	//calcular soma de dois dados - PROCESSAMENTO
	SOMA = A + B; 
	//Apresentar resultado final ao usuario
	printf ("Resultado da soma: %d", SOMA);
	return 0;
} //fim da execução 

