#include <stdio.h>
#include "lista.h"

int main(){
	
	Lista* l = createLista();
	if(isEmpety(l))
		printf("Lista criada com o tamanho %d\n\n",l->size);
	
	Demand demand;

	demand.id =0;
	demand.origem = 0;
	demand.destino = 8;
	pushLeft(l, demand);


	demand.id =1;
	demand.origem = 0;
	demand.destino = 8;
	pushLeft(l, demand);

	demand.id =2;
	demand.origem = 0;
	demand.destino = 8;
	pushLeft(l, demand);


	demand.id =3;
	demand.origem = 0;
	demand.destino = 8;
	pushLeft(l, demand);


	demand.id =4;
	demand.origem = 0;
	demand.destino = 8;
	pushLeft(l, demand);


	demand.id =5;
	demand.origem = 0;
	demand.destino = 8;
	pushLeft(l, demand);

	printf("Elementos inseridos. Tamanho da lista %d\n", l->size);

	printf("Imprimindo lista do começo\n");
	printListHome(l);

	printf("\nAgora do fim cambada\n");
	printListEnd(l);
	printf("\n\n");
	
	printf("Popando do começo\n");
	popHome(l);
	printListHome(l);
	printf("Tamanho atual da Lista: %d\n\n",l->size);

	printf("Popando do fim\n");
	popEnd(l);
	printListHome(l);
	printf("Tamanho atual da Lista: %d\n\n",l->size);

	printf("Vendo se as popadas não foderam com as referencias\n");
	printListHome(l);
	printf("\n");
	printListEnd(l);
	printf("Tamanho da lista %d. Se você tá vendo isso então nada fodido :)\n", l->size);
	return 0;
}
