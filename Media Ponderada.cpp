//Média de notas entre três números


#include<stdio.h>
int main(){
	//declaração
	double notaA, notaB, notaC, MEDIA; // double %lf - real - dupla precisão
	//corpo principal
	printf ("Digite a nota A: "); //mostrar em tela 
	scanf ("%lf", &notaA); //ler dado da variavel A
	printf ("Digite a nota B: "); //mostrar em tela
	scanf ("%lf", &notaB); //ler dado da variavel B
	printf ("Digite a nota C: "); //mostrar em tela 
	scanf ("%lf", &notaC); //ler dado da variavel C
	//calcular media ponderada - PROCESSAMENTO
	MEDIA = (notaA * 2 + notaB * 3 + notaC * 5) / 10;
	//apresentar resultado final ao usuario
	printf ("notaA, %.1lf ", notaA);
	printf ("notaB, %.1lf ", notaB);
	printf ("notaC, %.1lf \n", notaC);
	printf ("notaA, %.1lf notaB, %.1lf notaC, %.1lf ");
} //fim do programa
