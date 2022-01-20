#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

/*
	Pergunta 6
		Escreva um programa que leia nomes completos do teclado e os escreva no ecr� no formato Apelido, Nome sem Apelido
			Nome: Jo�o Carlos Cunha
			Cunha, Jo�o Carlos
			Nome: Catarina BATISTA
			Batista, Catarina
		colocando apenas a primeira letra de cada nome em MAI�SCULAS.
		O processamento termina quando o utilizador introduzir a string SAIR escrita com min�sculas ou mai�sculas.
		Nota: Pode utilizar qualquer fun��o de apoio j� estudada e/ou anteriormente implementada.
*/

#define OP_SAIR "SAIR"

//fun��o resolvida na pergunta 5
char* wordupr1(char* s) {
	int i;

	s[0] = toupper(s[0]); // O primeiro car�cter fica sempre em mai�scula

	for (i = 1; s[i - 1] != '\0'; i++)
		if (s[i - 1] == ' ') //se o car�cter anterior for um espa�o
			s[i] = toupper(s[i]);
		else
			s[i] = tolower(s[i]);
	return s;
}

//Devolve o n�mero de ocorr�ncias do car�cter ch na string s
//fun��o desenvolvida nas sess�es s�ncronas
int strcountc1(char* s, char ch) {
	int i, conta;
	for (i = conta = 0; s[i] != '\0'; i++)
		if (s[i] == ch)
			conta++;
	return conta;
}

void separa(char* nome, char* apelido) {
	int i, j;
	if (strcountc1(nome, ' ') == 0) {// existe apenas uma ou zero palavras no nome
		apelido[0] = '\0';
		return;
	}

	//existe a garantia que existe um apelido
	for (i = (int)(strlen(nome) - 1), j = 0; nome[i] != ' ';)
		apelido[j++] = nome[i--];
	apelido[j] = '\0'; //terminar a string apelido
	nome[i] = '\0'; //retirar o apelido da string nome

	//como a string apelido foi colocada do fim para o princ�pio, � necess�rio invert�-la
	_strrev(apelido);
}

int prog0714() { //programa de teste
	setlocale(LC_ALL, "Portuguese_Portugal");

	char nome[100], apelido[20];
	for (;;) {//equivalente a while(1)
		printf("Nome: ");
		gets_s(nome, 100);
		if (_stricmp(nome, OP_SAIR) == 0) //sair do programa (compara, ignorando mai�sculas ou min�sculas)
			break;
		separa(nome, apelido);

		if (!apelido[0]) //se s� houver um nome
			printf("%s\n", wordupr1(nome));
		else
			printf("%s, %s\n", wordupr1(apelido), wordupr1(nome));
	}

	return 0;
}
