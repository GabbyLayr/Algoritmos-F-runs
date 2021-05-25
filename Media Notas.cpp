//Leia quatro números (N1, N2, N3 e N4) e o nome do aluno, correspondentes ás quatro notas de um aluno...
//...Calcule a média simples.Para cada uma destas notas, mostre esta média acompanhada pela mensagem...
//... "Média: ". Se esta médio for maior ou igual a 7.0, imprima a mensagem "'Nome do Aluno', Aprovado!"...
//...Se esta média for menor, imprima a mensagem "'Nome do Aluno', Reprovado!"
//Apresentar ao usuário/aluno seus dados, notas, frequencias e se foi aprovado


#include<stdio.h> //Biblioteca para entrada e saída: printf e scanf
int main (){ 
//declarações variáveis, 
	char nomeAluno[25]; //nome do aluno de até 25 caracteres/letras, %c
	char sexo; //sexo do aluno definido por F ou M, %c
	double N1, N2, N3, N4; //notas do aluno, %lf
	int freq; //frequencia do aluno
	int media;
//receber e processar dados:
//receber e processar nome do aluno
	printf("Digite seu nome: ");
	fgets(nomeAluno, 25, stdin);
//receber e processar dados do sexo do usuário
	printf("Digite o sexo, F ou M: ");
	scanf("%c", &sexo);
//receber e processar os dados referente as notas inseridos pelo usuário	
	printf("Digite sua primeira nota: "); //receber N1, primeira nota
	scanf("%lf", &N1); //processar N1, primeira nota
	
	printf("Digite sua sugunda nota: "); //receber N1, primeira nota
	scanf("%lf", &N2); //processar N1, primeira nota
	
	printf("Digite sua terceira nota: "); //receber N1, primeira nota
	scanf("%lf", &N3); //processar N1, primeira nota
	
	printf("Digite sua quarta nota: "); //receber N1, primeira nota
	scanf("%lf", &N4); //processar N1, primeira nota
	
//receber e processar os dados referentes a frequência
	printf("Digite sua frequencia:");
	scanf("%d", &freq);	
//processamento:calculo de média das notas
	media = N1*0.2 + N2*0.3 + N3*0.4 + N4*0.1;
//apresentar dados em tela:
//apresentar dados em tela ao aluno	com media >= 7 e freq >= 15
	if (media >= 7) //&& - E,os dois valores precisam ser verdadeiros
	printf("Aprovado!\n");
	    else if  (media >= 5)
	         printf ("Exame final!\n");
	         else printf ("Reprovado!\n");			

	return 0;
}
