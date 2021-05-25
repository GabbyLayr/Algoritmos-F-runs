//

#include<stdio.h> //entrada e saída
#include<locale.h> //portugues
#include<ctype.h> // tranformação de letra maiúscula para minúscula e vice-versa: toupper tolower

int main (){
setlocale (LC_ALL, "Portuguese");
	int ddd;
	char escolha;
//Entrda:	
printf("DDD: ");
scanf("%d", &ddd);
//Saída:
do{
	
	switch(ddd){ //o switch só aceita char sendo uma única letra | utilizamos o switch
//no lugar de if-else quando possuo várias opções
		case 61: printf("Brasília"); break;
		case 62: printf("Goiás"); break;
		case 63: printf("Tocantins"); break;
		case 21: printf("Rio de Janeiro"); break;
		default: printf("Inválido!"); break;
	} //fim switch
		
	printf("\nDeseja realizar outra operação? S.sim ou N.não: ");
	scanf("%s", &escolha);
	escolha = toupper(escolha);
	if (escolha == 'N'){
		printf("Sessão finalizada!");}
}while (escolha == 'S');
			
}
