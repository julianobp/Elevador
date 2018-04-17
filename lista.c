/*	v0.3
	Implementa e testa as funçoes popTail(retira do fim)
	e popHome(retira do começo)
*/
#include "lista.h"
#include <stdio.h>
#include <stdlib.h>


/*
	Cria Lista com tamanho 0 e faz os ponteiros head e begin apontar pra null

*/
Lista* createLista(){
	Lista* l = (Lista*)malloc(sizeof(Lista));
	l->head = NULL;
	l->begin = NULL;
	l->size = 0;
}

/*
	Retorna se o tamanho da lista é zero	
*/
int isEmpety(Lista* l){
	return (l->size == 0);
}

/*
	Insere elementos na esquerda
	1º nod recebe os dados
	2º no->next aponta para null
	3º no->prev aponta para a l->head
	Se a lista estivar faz l->head e l->begin apontar para node
	Se não o l->head->next aponta para node(ou seja o next do no anterior aponta para este no)
		l->head aponta para node
	5º O tamanho da lista e incrementado
*/
void pushLeft(Lista*l, Demand demand){
	Node* node = (Node*)malloc(sizeof(Node));
	node->demand = demand;
	node->next = NULL;
	node->prev = l->head;
	if(isEmpety(l)){
		l->head = node;
		l->begin = node;
		l->size++;
		return;
	}
	l->head->next = node;
	l->head = node;
	l->size++;
}

//Imprime lista do começo
void printListHome(Lista *l){
	Node* pointer = (Node*)malloc(sizeof(Lista));
	pointer = l->begin;
	while(pointer != NULL){
		printf("Id: %d Origem: %d Destino: %d\n", pointer->demand.id, pointer->demand.origem,
		pointer->demand.destino);
		pointer = pointer->next;
	}	
}

//Imprime lista do fim
void printListEnd(Lista *l){
	Node* pointer = (Node*)malloc(sizeof(Lista));
	pointer = l->head;
	while(pointer != NULL){
		printf("Id: %d Origem: %d Destino: %d\n", pointer->demand.id, pointer->demand.origem,
		pointer->demand.destino);
		pointer = pointer->prev;
	}
}


//Retira do começo
int popHome(Lista* l){
	Node* first = (Node*)malloc(sizeof(Node));
	Node* second = (Node*)malloc(sizeof(Node));
	first = l->begin;
	second = l->begin->next;
	second->prev = NULL;
	first->next = NULL;
	free(first);
	l->begin = second;
	l->size--;
}

//Retira do fim
int popEnd(Lista* l){
	Node* last = (Node*)malloc(sizeof(Node));
	Node* peneLast = (Node*)malloc(sizeof(Node));
	last = l->head;
	peneLast = l->head->prev;
	peneLast->next = NULL;
	last->prev = NULL;
	free(last);
	l->head = peneLast;
	l->size--;
}