#include <stdio.h>
#include <locale.h>

/*
	Exercício 4
		Implemente a função strset cujo cabeçalho é:
			char *strset(char *s, char ch)
		Coloca em todas as posições de string s o carácter ch, devolvendo s.
			Exemplo:
				strset("Alface", '#');	→	"######"
				strset("alf", 'A');		→	"AAA"
*/

char* strset(char* s, char ch) {
	int i;
	for (i = 0; s[i] != '\0'; i++)
		s[i] = ch;
	return s;
}

int prog0708() {
	setlocale(LC_ALL, "Portuguese_Portugal");
	char nome[100];
	gets_s(nome, 100);
	strset(nome, '|');
	puts(nome);
	return 0;
}