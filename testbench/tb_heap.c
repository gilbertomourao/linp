/**
 * Autor: Gilberto José Guimarães de Sousa Mourão
 *
 * TB para as funções que envolvem a manipulação 
 * do heap de memória de LINP.
 */

#include <linp.h>

int main()
{
	lp.start(); /* Cria um bloco LINP */

	Linp_Mat *src = lp.criarmat(100, 100);

	lp.start(); /* Cria um bloco LINP dentro de um bloco já existente */

	Linp_Mat *dst = lp.criarmat(100, 100);

	lp.lerarquivo(src, "txt/camomile.txt");
	lp.lerarquivo(dst, "txt/camomile.txt");

	lp.dispmat(src, "Src");
	lp.dispmat(dst, "Dst");

	lp.stop(); /* Finaliza o bloco interno */

	lp.stop(); /* Finaliza o bloco externo */

	return 0;
}