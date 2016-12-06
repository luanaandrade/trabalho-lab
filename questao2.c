/* 2. No dia da estréia do filme “Senhor dos Anéis”, uma grande emissora de TV realizou uma pesquisa logo
	  após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade
	  e a sua opinião em relação ao filme: excelente -1; bom-2; regular-3. Criar um algoritmo que receba a 
	  idade e a opinião de 30 espectadores, calcule e imprima:
			A média das idades das pessoas que responderam regular; 
			a quantidade de pessoas que responderam bom; 
			a percentagem de pessoas que responderam excelente entre todos os expectadores analisados. 		*/

#include<stdio.h>
#include<stdlib.h>
#define esp 30

struct Espectador{
	int idade;
	int opniao;
} pessoa;

int main(){
	int cont = 0, reg = 0, bom = 0, exc = 0;
	int opniao, i;
	float totalExc, mediaReg;
	
	for(i = 0; i < esp; i++){
		printf("\n\nIdade:\t");
		scanf("%d", &pessoa.idade);

		printf("\n1-excelente\n2-bom\n3-regular\n\nQual a sua opniao?\t");
		scanf("%d", &pessoa.opniao);

		printf("-------------------------------------------------------");
		
		switch(pessoa.opniao){
			case 1:
				exc += 1;
				break;
			case 2:
				bom += 1;
				break;
			case 3:
				reg += pessoa.idade;
				cont += 1;
				break;
			default:
				printf("\nOpcao Invalida!\n");
				break;
		}
	}
		
	totalExc = (exc * 100) / esp;
	printf("\n\n\n%.1f %% dos espectadores acharam o filme EXCELENTE\n", totalExc);

	printf("\n%d espectadores acharam o filme BOM\n", bom);

	mediaReg = reg / cont;
	printf("\nA media da idade dos espectadores que acharam o filme REGULAR eh de %.0f anos\n\n\n", mediaReg);
}
