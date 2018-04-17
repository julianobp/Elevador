typedef struct solicitacao{
	int origem;
	int destino;
	int id;
}Demand;

typedef struct node{
	Demand demand;
	struct node* next;
	struct node* prev;
}Node;

typedef struct lista{
	int size;
	Node* head;
	Node* begin;
}Lista;

Lista* createLista();
int isEmpety(Lista* l);
void pushLeft(Lista* l, Demand demand);
void printListHome(Lista *l);
void printListEnd(Lista *l);
int popEnd(Lista* l);
int popHome(Lista* l);
