//iformar faixa et�ria
//0-3 = bebe
//4-10 = crian�a
//11-17 = adolecente
//18-40 = adulto
//41-60 = adulto 2
//61 ... = idoso

#include<stdio.h> //biblioteca de entrada e sa�da: printf e scanf
int main (){
//declara��es vari�veis	
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
	    printf("%s, %d, Crian�a", nome, idade);
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
