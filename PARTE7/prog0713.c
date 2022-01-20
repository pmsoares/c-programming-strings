#include <stdio.h>
#include <ctype.h>
#include <locale.h>

/*
	Pergunta 5
		Implemente a função:
			char *wordupr(char *s)
		Recebe uma string, coloca a primeira letra de cada palavra em maiúscula e as restantes em minúsculas.
		Supõe-se que a separação entre palavras é realizada por espaços em branco.
			Exemplo:
				wordupr("ERA uma VeZ")                      →    "Era Uma Vez"
*/

char* wordupr(char* s) {
	int i;

	s[0] = toupper(s[0]); // O primeiro carácter fica sempre em maiúscula

	for (i = 1; s[i - 1] != '\0'; i++)
		if (s[i - 1] == ' ') //se o carácter anterior for um espaço
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);
	return s;
}

int main() { //programa de teste
	setlocale(LC_ALL, "Portuguese_Portugal");

	char teste[] = "ERA uma VeZ";
	printf("%s\n", wordupr(teste));

	return 0;
}
