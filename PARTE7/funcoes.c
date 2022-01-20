#include <ctype.h>

int strlen(char* s) {
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

int isnull(char* s) {
	return s[0] == '\0';
}

char* strcpy(char* dest, char* orig) {
	int i;
	for (i = 0; orig[i] != '\0'; i++)
		dest[i] = orig[i];
	dest[i] = '\0';
	return dest;
}

char* strcat(char* dest, char* orig) {
	int i, len;
	for (i = 0, len = strlen(dest); orig[i] != '\0'; i++, len++)
		dest[len] = orig[i];
	dest[len] = '\0';
	return dest;
}

int strcountc(char* s, char ch) {
	int i, conta;
	for (i = conta = 0; s[i] != '\0'; i++)
		if (s[i] == ch)
			conta++;
	return conta;
}

int strcountd(char* s) {
	int i, conta;
	for (i = conta = 0; s[i] != '\0'; i++)
		if (isdigit(s[i]))
			conta++;
	return conta;
}

//devolve o índice na string da 1ª ocorrência do ch
int indchr(char* s, char ch) {
	int i;
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == ch)
			return i;
	return -1;
}

int strcap(char* s) {
	int i, j;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
		if (s[i] != s[j])
			return 0;
	return 1;
}

char* strrev(char* s) {
	int i, len;
	char aux;

	for (i = 0, len = strlen(s) - 1; i < len; i++, len--) {
		aux = s[i];
		s[i] = s[len];
		s[len] = aux;
	}
	return s;
}

int strcmp(char* s1, char* s2) {
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return s1[i] - s2[i];
}

char* strpad(char* s) {
	int i = strlen(s);
	s[2 * i] = s[i];

	for (i--; i >= 0; i--) {
		s[2 * i] = s[i];
		s[2 * i + 1] = ' ';
	}
	return s;
}

char* strdelc(char* s, char ch) {
	int i, j;
	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != ch)
			s[j++] = s[i];
	s[j] = '\0';
	return s;
}
