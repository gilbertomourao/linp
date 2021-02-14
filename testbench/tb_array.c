/**
 * Autor: Gilberto José Guimarães de Sousa Mourão
 *
 * Testbench das funções relacionadas a arrays em LINP
 */

#include <linp.h>

int main()
{
	lp.start();

	Linp_Mat *mat1 = lp.criarmat(100,100);
	Linp_Mat *mat2 = lp.criarmat(100,100);

	lp.lerarquivo(mat1, "txt/camomile.txt");
	lp.lerarquivo(mat2, "txt/matriz_P1.txt");

	lp.dispmat(mat1, "Matriz 1");
	lp.dispmat(mat2, "Matriz 2");

	lp.stop();

	return 0;
}