/**
 * Autor: Gilberto José Guimarães de Sousa Mourão
 * 
 * Procura pela string "camomile" no arquivo camomile.txt
 * Também procura por palíndromos no mesmo arquivo.
 *
 * A procura ocorre em todas as direções (linhas, colunas, 
 * diagonais no sentido da principal e diagonais no sentido 
 * da secundária). Todos os caracteres não alfanuméricos 
 * são ignorados, bem como o case sensitive.
 */

#include <linp.h>
#include <stdio.h>

int main()
{
	Linp_Mat *src = lp.criarmat(100,100);
	Linp_Mat *dst1 = lp.criarmat(100,100);
	Linp_Mat *dst2 = lp.criarmat(100,100);
	Linp_Word **palavras;
	Linp_Word **palindromos;
	char string[100] = "camomile";
	int i; /* iterador */

	lp.lerarquivo(src, "txt/camomile.txt");
	lp.dispmat(src, "Matriz");

	lp.procpali(src, dst1, &palindromos, "todas", "!alfanum", true);
	lp.dispmat(dst1,"Palindromos");

	for (i = 0; i < 4; i++)
	{
		Linp_Word *varre = palindromos[i];
		while (varre)
		{
			printf("Palindromo encontrado: %s, entre [%u][%u] e [%u][%u]\n", 
				    varre->word, varre->y0, varre->x0, 
				    varre->y1, varre->x1);
			varre = varre->next;
		}
	}

	lp.procstr(src, dst2, &palavras, string, "todas", "!alfanum", true);
	lp.dispmat(dst2,"String");

	for (i = 0; i < 4; i++)
	{
		Linp_Word *varre = palavras[i];
		while (varre)
		{
			printf("String encontrada: %s, entre [%u][%u] e [%u][%u]\n", 
				    varre->word, varre->y0, varre->x0, 
				    varre->y1, varre->x1);
			varre = varre->next;
		}
	}

	/* Libera a memória previamente alocada */
	lp.destruirmat(src);
	lp.destruirmat(dst1);
	lp.destruirmat(dst2);

	for (i = 0; i < 4; i++)
	{
		lp.destruirword(palavras[i]);
		lp.destruirword(palindromos[i]);
	}

	return 0;
}

