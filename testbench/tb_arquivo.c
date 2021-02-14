/**
 * Autor: Gilberto José Guimarães de Sousa Mourão
 *
 * Testbench para leitura e criãção de arquivo texto.
 */

#include <linp.h>

int main()
{
	lp.start();

	Linp_Mat *src = lp.criarmat(100, 100);

	lp.lerarquivo(src, "txt/camomile.txt");
	lp.criararquivo(src, "txt/copia_camomile.txt");

	/**
	 * Libera a memória previamente alocada
	 */
	lp.stop();

	return 0;
}