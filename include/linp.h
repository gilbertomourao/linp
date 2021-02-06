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

#ifndef BIBLIOTECA_LINP_H
#define BIBLIOTECA_LINP_H

/* Bibliotecas auxiliares */
#include <stddef.h>
#include <stdbool.h>

/* Tipos definidos em LINP */

/**
 * Struct que define a matriz na biblioteca Linp
 */
typedef struct linp__mat
{
	char **data;
	unsigned rows;
	unsigned cols;
} Linp_Mat;

/**
 * Struct que guarda as coordenadas do início e do fim 
 * de uma palavra em Linp_Mat. 
 * (x0, y0) --> (x1, y1)
 */
typedef struct linp__word
{
	unsigned x0;
	unsigned x1;
	unsigned y0;
	unsigned y1; 
	char *word;
	struct linp__word *next; /* lista encadeada */
} Linp_Word;

/**
 * Funções
 */

struct linp_namespace
{
	/* array.c */
	Linp_Mat *(*criarmat)(unsigned, unsigned);
	void (*destruirmat)(Linp_Mat *);
	void (*lerarquivo)(Linp_Mat *, char *);
	void (*dispmat)(Linp_Mat *, char *);

	/* input.c */
	void (*input)(const char *, const char *, void *, unsigned);

	/* proc.c */
	void (*procstr)(Linp_Mat *, Linp_Mat *, Linp_Word ***, 
					char *, char *, char *, bool);
	void (*procpali)(Linp_Mat *, Linp_Mat *, Linp_Word ***, 
					char *, char *, bool);

	/* word.c */
	void (*destruirword)(Linp_Word *);
};

extern struct linp_namespace lp;

#endif /* BIBLIOTECA_LINP_H */