#include <stdio.h>
#include <locale.h>

int prog0703() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nome[50];

	printf("Introduza o nome completo: ");
	gets_s(nome, 50);

	printf("Nome completo: %s\n", nome);

	return 0;
}