/* TAD: Ponto (x,y) */

/* Tipo exportado */
typedef struct ponto Ponto;

/* Fun��es exportadas */

/* Fun��o cria
** Aloca e retorna um ponto com coordenadas (x,y)
*/
Ponto* cria (float x, float y);

/* Fun��o libera
** Libera a mem�ria de um ponto previamente criado.
*/
void libera (Ponto* p);

/* Fun��o acessa
** Devolve os valores das coordenadas de um ponto
*/
void acessa (Ponto* p, float* x, float* y);

/* Fun��o atribui
** Atribui novos valores �s coordenadas de um ponto
*/
void atribui (Ponto* p, float x, float y);

/* Fun��o distancia
** Retorna a dist�ncia entre dois pontos
*/
float distancia (Ponto* p1, Ponto* p2);
