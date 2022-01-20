#include <stdio.h>
#include <locale.h>
#include <ctype.h>

/*
	Exercício 5
		Implemente a função strupr cujo cabeçalho é:
			char *strupr(char *s)
		Coloca todos os caracteres da string em maiúsculas
		(pode utilizar a função toupper() da biblioteca ctype.h).
			Exemplo:
				strupr(“Teste Upper Nº1”);	→	“TESTE UPPER Nº1”
*/

char* strupr(char* s) {
	int i;
	for (i = 0; s[i] != '\0'; i++)
		s[i] = toupper(s[i]);
	return s;
}

int prog0709() {
	setlocale(LC_ALL, "Portuguese_Portugal");
	char nome[100];
	gets_s(nome, 100);
	puts(strupr(nome));
	return 0;
}