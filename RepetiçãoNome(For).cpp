//escreva um algoritmo que receba o nome do aluno e repita, por 5000vezes, 
//a frase: Eu, fulano, vou pssar em algoritmo com média 10!
//entrada: nome
//saída nome x 5000


#include<stdio.h> //
int main(){
//
	char nomeUsuario[100];
	int contador;
//
	printf("Digite seu nome: ");
	fgets(nomeUsuario, 100, stdin); //char - string = caracteres com espaço
//para = for
//de até
    autoincremento: contador++;
//for(iniciar; condição, passo)
    for(contador = 0; contador <= 10000; contador++){
      printf("Eu, %s, vou passar em algoritmos e programacao com media 10! \n ", nomeUsuario );		
	}
	
	return 0;	
}

