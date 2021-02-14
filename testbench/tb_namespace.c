/**
 * Autor: Gilberto José Guimarães de Sousa Mourão
 *
 * Testa possíveis conflitos de nomes de funções e 
 * verifica como o namespace lp resolve isso.
 */

#include <linp.h>
#include <stdio.h>
#include <stdlib.h>

Linp_Mat *criarmat(unsigned rows, unsigned cols)
{
	Linp_Mat *ret_mat = malloc(sizeof(Linp_Mat));
	unsigned i;

	printf("Essa funcao e diferente! Nao havera conflito!\n");

	ret_mat->data = malloc(rows * sizeof(char *));
	if (ret_mat->data == NULL)
	{
		printf("ERRO!\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < rows; i++)
	{
		ret_mat->data[i] = malloc(cols * sizeof(char));
		if (ret_mat->data[i] == NULL)
		{
			printf("ERRO!\n");
			exit(EXIT_FAILURE);
		}
	}

	ret_mat->rows = rows;
	ret_mat->cols = cols;

	return ret_mat;
}

void destruirmat(Linp_Mat *mat)
{
	unsigned i;

	for (i = 0; i < mat->rows; i++)
		free(mat->data[i]);

	free(mat->data);
	free(mat);
	mat = NULL;
}

int main()
{
	lp.start();

	/* Verifica se haverá conflito entre as duas funções */
	Linp_Mat *mat1 = criarmat(100, 100); /* Não transfere mat1 para o heap! */
	Linp_Mat *mat2 = lp.criarmat(100, 100);

	lp.lerarquivo(mat1, "txt/Matriz_P1.txt");
	lp.lerarquivo(mat2, "txt/Matriz_P1.txt");

	lp.dispmat(mat1, "Matriz 1");
	lp.dispmat(mat2, "Matriz 2");

	destruirmat(mat1);

	lp.stop();

	return 0;
}