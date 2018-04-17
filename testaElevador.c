#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "elevador.h"

void menu(struct Elevador *e,int opc);

int main(){
	int opc;

	struct Elevador e;
	e.capacidade = 10;
	e.andarMin = 0;
	e.andarMax = 10;
	e.lotacao = 0;
	e.posicao = 0;
	e.destino = 0;

	do{
		printf("Estado atual do elevador\n");
		menu(&e, 6);
		printf("Opcoes:\n");
		printf("1- Subir\n2- Descer\n3- Carrega\n4- Descarrega\n42- Sair\n");
		printf("Escolha... ");
		scanf("%d",&opc);
		menu(&e,opc);
		sleep(1);
		system("clear");
	}while(opc != 42);

	return 0;
}

void menu(struct Elevador *e,int opc){
	switch(opc){
		case 1:
			subir(e);
		break;

		case 2:
			descer(e);
		break;

		case 3:
			carrega(e);
		break;

		case 4:
			descarrega(e);
		break;
		case 6:
			status(*e);
		break;
	}
}