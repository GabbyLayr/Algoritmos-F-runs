//escreva um algoritmo que receba o nome do aluno e repita, por 5000vezes, 
//a frase: Eu, fulano, vou pssar em algoritmo com m�dia 10!
//entrada: nome
//sa�da nome x 5000


#include<stdio.h> //
int main(){
//
	char nomeUsuario[100];
	int contador;
//
	printf("Digite seu nome: ");
	fgets(nomeUsuario, 100, stdin); //char - string = caracteres com espa�o
//para = for
//de at�
    autoincremento: contador++;
//for(iniciar; condi��o, passo)
    for(contador = 0; contador <= 10000; contador++){
      printf("Eu, %s, vou passar em algoritmos e programacao com media 10! \n ", nomeUsuario );		
	}
	
	return 0;	
}

