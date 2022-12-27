#include <stdio.h>
#include <stdlib.h>
#define contSpace 8

/*
 *  Árvore AVL (Adelson-Velskii e Landis)
 *
 *  Fator de balanceamento = hdir - hesq
 *
 *  Fonte: http://www.ic.unicamp.br/~islene/mc202/aula17/avl.c
 */

#include <stdlib.h>
#include <stdio.h>

typedef struct no {
  int v;
  int bal;   /* hdir - hesq */
  struct no *esq, *dir;
}No;

int altura(No* t)
{
  if (t == NULL)
  {
    return 0;
  }
  int hesq = altura(t->esq);  
  int hdir = altura(t->dir);
  return hesq > hdir ? hesq + 1 : hdir + 1;
}

No* cria(int v, No* esq, No* dir)
{
  No* n = (No*) malloc (sizeof(No));
  n->v = v;
  n->bal = altura(dir) - altura(esq);
  n->esq = esq;
  n->dir = dir;
  return n;
}

/* Versão ineficiente! Você sabe implementar outra? */
/* Não verifica se é uma árvore de busca. */
int verifica_AVL(No* t)
{
  if (t == NULL)
    return 1;
  return abs(altura(t->dir) - altura(t->esq)) <= 1;
}

void escreve(No* r) {
  if (r != NULL)
  {
    escreve(r->esq);
    printf("%d(%d)", r->v, r->bal);
    escreve(r->dir);
  }
}

void escreve_verifica(No* t)
{ 
  if (!verifica_AVL(t))
  {
    printf("Não é AVL!\n");
  }
  escreve(t); 
  printf("\n");
}

void LL(No** r)
{
  No* b = *r;
  No* a = b->esq;
  b->esq = a->dir;
  a->dir = b;
  a->bal = 0;
  b->bal = 0;
  *r = a;
}

void RR(No** r)
{
  No* a = *r;
  No* b = a->dir;
  a->dir = b->esq;
  b->esq = a;
  a->bal = 0;
  b->bal = 0;
  *r = b;
}

void LR(No** r)
{
  No *c = *r;
  No *a = c->esq;
  No *b = a->dir;
  c->esq = b->dir;
  a->dir = b->esq;
  b->esq = a;
  b->dir = c;
  switch(b->bal)
  {
    case -1:
      a->bal = 0;
      c->bal = 1;
      break;
    case 0:
      a->bal = 0;
      c->bal = 0;
      break;
    case +1:
      a->bal = -1;
      c->bal = 0;
      break;
  }
  b->bal = 0;
  *r = b;
}

void RL(No** r)
{
  No *a = *r;
  No *c = a->dir;
  No *b = c->esq;
  c->esq = b->dir;
  a->dir = b->esq;
  b->esq = a;
  b->dir = c;
  switch(b->bal)
  {
    case -1:
      a->bal = 0;
      c->bal = 1;
      break;
    case 0:
      a->bal = 0;
      c->bal = 0;
      break;
    case +1:
      a->bal = -1;
      c->bal = 0;
      break;
  }
  b->bal = 0;
  *r = b;  
}


/*
 * cresceu indica se a árvore cresceu 
 * após a inserção
 */
int aux_insere(No** t, int v, int *cresceu)
{
  if (*t == NULL)
  {
    *t = cria(v, NULL, NULL);
    *cresceu = 1;
    return 1;
  }
    
  if (v == (*t)->v)
  {
    return 0;
  } 
    
  if (v < (*t)->v)
  {
    if (aux_insere(&(*t)->esq, v, cresceu))
    {
      if (*cresceu)
      {
        switch ((*t)->bal)
        {
        case -1:
          if ((*t)->esq->bal == -1)
            LL(t);
          else
            LR(t);
          *cresceu = 0;
          break;
        case 0:
          (*t)->bal = -1;
          *cresceu = 1;
          break;
        case +1:
          (*t)->bal = 0;
          *cresceu = 0;
          break;
        }
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  
  if (aux_insere(&(*t)->dir, v, cresceu))
  {
    if (*cresceu)
    {
      switch ((*t)->bal)
      {
      case -1:
        (*t)->bal = 0;
        *cresceu = 0;
        break;
      case 0:
        (*t)->bal = +1;
        *cresceu = 1;
        break;
      case +1:
        if ((*t)->dir->bal == +1)
          RR(t);
        else
          RL(t);
        *cresceu = 0;
        break;
      }
    }
      return 1;
  }
  else
  {
    return 0;
  }
}

/* Retorna 1 se inseriu ou 0 se 
   o elemento ẽ repetido. */
int insere(No **t, int v)
{
  int cresceu;
  return aux_insere(t, v, &cresceu);
}

void imprime (No* a)
{
	if (a != NULL)
  {
		imprime(a->esq);
		printf("\n  - %d",a->v);
		imprime(a->dir);
	}
}

// ------------ IMPRIME 2D --------------- //
void display_em_2D(No* node, int espaco) 
{
	int i;
	if (node == NULL)
	{
		return;
	}
	espaco += contSpace;
	display_em_2D(node->dir, espaco);
	printf("\n");
	for (i = contSpace; i < espaco; i++)
	{
		printf(" ");
	}
	printf("%d\n", node->v); 
	display_em_2D(node->esq, espaco); 
}
// --------------------------------------- //

// ------------ IMPRIME 2D --------------- //  
void display_2D(No* node) 
{
	display_em_2D(node, 0); 
}
// --------------------------------------- //

int main() {
  No* t = cria(2, NULL, NULL);
  insere(&t, 1);
  escreve_verifica(t);
  insere(&t, 4);
  escreve_verifica(t);
  insere(&t, 3);
  escreve_verifica(t);
  insere(&t, 5);
  escreve_verifica(t);
  insere(&t, 0);
  escreve_verifica(t);
  insere(&t, 6);
  escreve_verifica(t);
  insere(&t, 7);
  escreve_verifica(t);
  imprime(t);

  display_2D(t);
  return 0;
}
