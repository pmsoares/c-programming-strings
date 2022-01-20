#include <stdio.h>
#include <locale.h>

/*
	Exercício adicional:
		Implemente a função
			char* strnset(char *s, char ch, int n)
		que coloca o carácter ch apenas nas primeiras n posições da string s.
		Se n > strlen(s), então n toma o valor de strlen(s)

			exemplos:
				strcpy(s, "alfabeto");
				strnset(s,'y',3);   -->  "yyyabeto"

				strcpy(s, "alfabeto");
				strnset(s,'y',23);   -->  "yyyyyyyy"
*/

char* strnset(char* s, char ch, int n) {
	int i;
	for (i = 0; (i < n) && (s[i] != '\0'); i++)
		s[i] = ch;

	return s;
}

int prog0710() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char frase[100], ch;
	int n;
	puts("Escreva uma frase (max 100 caracteres):");
	gets_s(frase, 100);
	printf("Qual o caráctere? ");
	ch = getchar();
	printf("Quantos caracteres quer substituir? ");
	scanf_s("%d", &n);

	puts(strnset(frase, ch, n));
	return 0;
}