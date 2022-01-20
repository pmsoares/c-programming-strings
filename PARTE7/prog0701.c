#include <stdio.h>
#include <locale.h>

int prog0701() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nome[50], apelido[50];
	
	printf("Introduza o nome: ");
	scanf_s("%s", nome, 50);
	printf("Introduza o apelido: ");
	scanf_s("%s", apelido, 50);

	printf("Nome completo: %s %s\n", nome, apelido);

	return 0;
}