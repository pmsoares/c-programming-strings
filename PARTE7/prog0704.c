#include <stdio.h>
#include <locale.h>

int prog0704() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nome[100];

	while (1) {

		puts("Introduza o nome completo:");
		gets_s(nome, 100);

		if (nome[0] == '\0')
			break;
		else
			printf("Nome introduzido: %s\n", nome);
	}
	return 0;
}