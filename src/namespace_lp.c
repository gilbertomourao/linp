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

#include "array.c"
#include "input.c"
#include "proc.c"
#include "word.c"

/**
 * Adiciona as funções ao namespace lp
 */
struct linp_namespace lp = {/* array.c */
							.criarmat = linp__criarmat, 
							.destruirmat = linp__destruirmat,
							.lerarquivo = linp__lerarquivo,
							.dispmat = linp__dispmat,
							/* input.c */
							.input = linp__input,
							/* word.c */
							.destruirword = linp__destruirword,
							/* proc.c */
							.procstr = linp__procstr, 
							.procpali = linp__procpali};