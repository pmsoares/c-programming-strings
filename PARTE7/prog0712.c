#include <stdio.h>
#include <locale.h>

/*
	Pergunta 4
		Implemente a função:
			char Max_Ascii(char *str)
		Devolve o carácter com maior código ASCII presente na string str.
		Se a string estiver vazia devolve '\0'.
*/

char Max_Ascii(char* str) {
	int i;
	char res = '\0';
	for (i = 0; str[i] != '\0'; i++)
		res = res > str[i] ? res : str[i];
	return res;
}

int pro0712() { //programa de teste
	setlocale(LC_ALL, "Portuguese_Portugal");

	char teste[] = "Exemplo de frase";
	printf("O carácter com maior código ASCII presente na frase: '%c'\n", Max_Ascii(teste));
	
	return 0;
}
