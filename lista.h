#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

//Numeros:
typedef struct listaNumero Numero;
typedef struct no NoNumero;

Numero *criar();
int listaVazia(Numero *l);
int inserirInicio(Numero *l, int it);//necessário para adição e multiplicação
int inserirFim(Numero *l, int it);
void limpar(Numero *l);
void mostrar(Numero *l);
int removerFim(Numero *l);
int removerInicio(Numero *l);//necessário para subtração e divisão
int corrige(Numero *l);//corrigir os erros de ordem q o scanf gerou nos numeros
int tamanho(Numero *l);
int copia(Numero *l, Numero *r);

//Historico:


//opcoes:
int opcaoA(Numero *a, Numero *b, Numero *c);

//Operações diversas:
int diferenca(Numero *a,Numero *b);
Numero *cortaNumero(Numero *a, int tam);
Numero *soma(Numero *n1, Numero *n2);
//Numero *somaAlt(Historico *l, Numero *n1, Numero *n2, int retorno);
Numero *subtracao(Numero *n1, Numero *n2);
//Numero *subtracaoAlt(Historico *l, Numero *n1, Numero *n2);
Numero *multiplicacao(Numero *n1, Numero *n2);
//Numero *multiplicacaoAlt(Historico *l, Numero *n1, Numero *n2);
Numero *divisao(Numero *n1, Numero *n2, Numero *resto);
//Numero *divisaoAlt(Historico *l, Numero *n1, Numero *n2);
void criarLogs();
void logErro(int x);
#endif
