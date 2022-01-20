#include <stdio.h>
#include <locale.h>

int prog0702() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nome[50];

	printf("Introduza o nome completo: ");
	scanf_s("%s", nome, 50);

	printf("Nome completo: %s\n", nome);

	return 0;
}