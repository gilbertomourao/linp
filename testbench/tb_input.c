/**
 * Autor: Gilberto José Guimarães de Sousa Mourão
 *
 * Obtém dados de entrada do usuário via stdin (teclado).
 */

#include <linp.h>
#include <stdio.h>

int main()
{
	int n;
	float f;
	double d;
	char string[20];
	char ch;

	lp.input("Insira um inteiro: ", "%d", &n, 1);
	lp.input("Insira um float: ", "%f", &f, 1);
	lp.input("Insira um double: ", "%lf", &d, 1);
	lp.input("Insira uma string: ", "%s", string, 20);
	lp.input("Insira um char: ", "%c", &ch, 1);

	printf("Dados inseridos: %d, %.15f, %.15f, %s, %c\n", n, f, d, string, ch);

	return 0;
}