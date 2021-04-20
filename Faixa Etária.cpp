//iformar faixa etária
//0-3 = bebe
//4-10 = criança
//11-17 = adolecente
//18-40 = adulto
//41-60 = adulto 2
//61 ... = idoso

#include<stdio.h> //biblioteca de entrada e saída: printf e scanf
int main (){
//declarações variáveis	
	char nome[25];
	int idade;
//leitura e processamento de dados
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
//processamento
	if (idade >= 0 && idade <= 3)
		printf("%s, %d, Bebe", nome, idade);
	else if (idade >= 4 && idade <= 10)
	    printf("%s, %d, Criança", nome, idade);
	else if (idade >= 11 && idade <= 17)
	    printf("%s, %d, Adolecente", nome, idade);
	else if (idade >= 18 && idade <= 40)
	    printf("%s, %d, Adulto", nome, idade);
	else if (idade >= 41 && idade <= 60)
	    printf("%s, %d, Adulto 2", nome, idade);
	else if (idade >= 60)
	    printf("%s, %d, Idoso", nome, idade);
		
    return 0;	
}
