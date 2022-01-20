#include <stdio.h>
#include <locale.h>

#include "funcoes.h"

/*
	Exerc�cio 1
		Usando as fun��es de manipula��o de strings implementadas na sess�o s�ncrona,
		escreva um programa que leia nomes de pessoas e os mostre no ecr� no
		formato Apelido, Nome.
		O programa deve terminar quando um nome for introduzido vazio.
*/

#define DIM 20
#define SEP_NOME ", "

int prog0705() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nome[DIM + 1], apelido[DIM + 1], completo[DIM * 2 + 1];
	do {
		printf("Nome: ");
		gets_s(nome, DIM);
		if (strlen(nome) == 0)
			break;
		printf("Apelido: ");
		gets_s(apelido, DIM);

		//strcpy(completo, apelido);
		//strcat(completo, SEP_NOME);
		//strcat(completo, nome);

		//puts(completo);

		printf("%s, %s\n", apelido, nome);


	} while (1);
	
	return 0;
}