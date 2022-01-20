#include <stdio.h>
#include <locale.h>
#include <ctype.h>

/*
	Exercício adicional:
		Implemente a função
			char* soMaiusculas(char* s)
		que recebe uma string e deixa-lhe apenas os caracteres maiúsculos.

			Exemplo:
				SoMaiusculas("Boa SorTe"); -->  "BST"
*/

char* soMaiusculas(char* s) {
	int i, j;
	for (i = 0, j = 0; s[i] != '\0'; i++)
		if ((s[i] >= 'A' && s[i] <= 'Z') || s[i] == ' ')
			s[j++] = s[i];
	s[j] = '\0';
	return s;
}

int prog0711() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char frase[100];
	puts("Escreva uma frase (max 100 caracteres):");
	gets_s(frase, 100);
	puts(soMaiusculas(frase));

	return 0;
}