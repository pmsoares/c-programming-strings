#include <stdio.h>
#include <locale.h>

#include "funcoes.h"

/*
	Exercício 2
		Escreva um programa que solicite ao utilizador nomes de pessoas,
		e os apresente no ecrã até que seja introduzido o nome "SAIR".
		Notar que a função strcmp faz a distinção entre minúsculas e maiúsculas.
*/

int prog0706() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nome[100];

	do {
		printf("Nome: ");
		gets_s(nome, 100);
		if (strcmp(nome, "SAIR"))
			puts(nome);

	} while (strcmp(nome, "SAIR"));

	puts("Terminou o programa!");

	return 0;
}