#include<stdio.h>

int main()
{
	int i = 10;	  //Suponha que a variável está alocada no byte "62287"
	char c = 'a';	  //Suponha que a variável está alocada no byte "62288"
	int *pi;	  //Suponha que a variável está alocada no byte "62289"
	char *pc;	  //Suponha que a variável está alocada no byte "62293"
	
	pi = &i;
	pc = &c;
	
	printf("%d\n", *pi);	//Imprime 10
	printf("%d\n", pi);	//Imprime 62287
	printf("%d\n", &pi);	//Imprime 62289
	
	printf("%c\n", *pc);	//Imprime a
	printf("%d\n", pc);	//Imprime 62288
	printf("%d\n", &pc);	//Imprime 62293
}
