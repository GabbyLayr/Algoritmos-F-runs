//

#include<stdio.h> //entrada e sa�da
#include<locale.h> //portugues
#include<ctype.h> // tranforma��o de letra mai�scula para min�scula e vice-versa: toupper tolower

int main (){
setlocale (LC_ALL, "Portuguese");
	int ddd;
	char escolha;
//Entrda:	
printf("DDD: ");
scanf("%d", &ddd);
//Sa�da:
do{
	
	switch(ddd){ //o switch s� aceita char sendo uma �nica letra | utilizamos o switch
//no lugar de if-else quando possuo v�rias op��es
		case 61: printf("Bras�lia"); break;
		case 62: printf("Goi�s"); break;
		case 63: printf("Tocantins"); break;
		case 21: printf("Rio de Janeiro"); break;
		default: printf("Inv�lido!"); break;
	} //fim switch
		
	printf("\nDeseja realizar outra opera��o? S.sim ou N.n�o: ");
	scanf("%s", &escolha);
	escolha = toupper(escolha);
	if (escolha == 'N'){
		printf("Sess�o finalizada!");}
}while (escolha == 'S');
			
}
