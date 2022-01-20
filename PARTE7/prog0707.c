#include <stdio.h>
#include <locale.h>

/*
	Exercício 3
		Implemente a função char *mygets(char *s) que lê uma string do teclado
		e a coloca no parâmetro da função (isto é, implemente a função gets).
		A função deverá ainda devolver a string lida.
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