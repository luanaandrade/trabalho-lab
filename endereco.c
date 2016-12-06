#include<stdio.h>

int main()
{
	int i = 10;	//Suponha que a variável está alocada no byte "62288"
	char c = 'a';	//Suponha que a variável está alocada no byte "62289"
	
	printf("%d", i);	//Imprime "10"
	printf("%d", &i);	//Imprime "62288"
	printf("%c", c);	//Imprime "a"
	printf("%c", &c);	//Imprime "62289"
}
