#include "elevador.h"
void status(struct Elevador e){
	printf("Posicao: %d\n", e.posicao);
	printf("Destino: %d\n", e.destino);
	printf("Lotacao: %d\n", e.lotacao);
	printf("isLotado: %d\n", isLotado(e));
}

int subir(struct Elevador *e){
	if(e->posicao < e->andarMax)
		e->posicao++;
	else
		printf("Tudo tem limite\n");
}

int descer(struct Elevador *e){
	if(e->posicao > e->andarMin)
		e->posicao--;
	else
		printf("Do chao nao passa\n");
}

int isLotado(struct Elevador e){
	if(e.lotacao < e.capacidade)
		return 0;
	else 
		return 1;
}
int carrega(struct Elevador *e){
	if(!isLotado(*e)){
		e->lotacao++;
		return 1;
	}
	else return 0;
	
}
void descarrega(struct Elevador *e){
	e->lotacao--;
}
