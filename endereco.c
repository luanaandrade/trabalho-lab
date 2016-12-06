#include<stdio.h>

int main()
{
	int i = 10;	//Suponha que esta variável está alocada a partir do byte "62288"
	char c = 'a';	//Suponha que esta variável está alocada a partir do byte "62289"
	
	printf("%d", i);	//Imprime "10"
	printf("%d", &i);	//Imprime "62288"
	printf("%c", c);	//Imprime "a"
	printf("%c", &c);	//Imprime "62289"
}
