/**
 * LINP - Biblioteca da disciplina Linguagem de Programação - EE, UFMA
 *
 * Autor: Gilberto José Guimarães de Sousa Mourão
 *
 * A biblioteca LINP tem como objetivo principal ajudar os alunos que 
 * estão cursando ou irão cursar a disciplina linguagem de programação. 
 * Aqui estão algumas funções cobradas ao longo dos anos em provas 
 * e em atividades. Sugiro que, caso não consiga desenvolver a sua 
 * própria função, utilize LINP como referência para estudar um determinado 
 * algoritmo. 
 *
 * Outra utilidade de LINP está no fato dela poder ser utilizada como 
 * comparação. As funções aqui presentes foram testadas em diversos 
 * casos e são confiáveis. É interessante ler a documentação de cada 
 * função para ter mais detalhes.
 *
 * A distribuição desta biblioteca é livre, podendo ser utilizada por 
 * qualquer pessoa, desde que seja citado o nome do autor e dos seus 
 * colaboradores. Os alunos que estão cursando a disciplina linguagem 
 * de programação e os que já foram aprovados podem contribuir com LINP 
 * desenvolvendo novas funções e/ou otimizando as já existentes. Para tal, 
 * siga as regras do github ou envie mensagem para um dos colaboradores 
 * do repositório.
 */

#include "../include/linp.h"

#include <stdlib.h>

/**
 * Destrói a lista encadeada de palavras L.
 */
static void linp__destruirlista(Linp_Word *L)
{
	Linp_Word *temp;

	while (L)
	{
		temp = L;
		L = L->next;
		free(temp->word);
		free(temp);
	}
}

/**
 * Destrói o array de listas encadeadas de palavras L.
 */
static void linp__destruirword(Linp_Word **L, unsigned size)
{
	unsigned i;

	for (i = 0; i < size; i++)
	{
		linp__destruirlista(L[i]);
	}

	free(L);
}
