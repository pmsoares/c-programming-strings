#include <stdio.h>
#include <locale.h>

#include "funcoes.h"

/*
	Exerc�cio 2
		Escreva um programa que solicite ao utilizador nomes de pessoas,
		e os apresente no ecr� at� que seja introduzido o nome "SAIR".
		Notar que a fun��o strcmp faz a distin��o entre min�sculas e mai�sculas.
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