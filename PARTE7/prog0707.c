#include <stdio.h>
#include <locale.h>

/*
	Exerc�cio 3
		Implemente a fun��o char *mygets(char *s) que l� uma string do teclado
		e a coloca no par�metro da fun��o (isto �, implemente a fun��o gets).
		A fun��o dever� ainda devolver a string lida.
*/

char* mygets(char* s) {
	int i = 0, ch;
	while ((ch = getchar()) != '\n')
		s[i++] = ch;
	s[i] = '\0';
	return s;
}

int prog0707() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nome[100];
	puts("Nome:");
	mygets(nome);
	puts(nome);
	return 0;
}