struct Elevador{
	int andarMin;
	int andarMax;
	int capacidade;
	int lotacao;
	int posicao;
	int destino;
};

void status(struct Elevador e);
int subir(struct Elevador *e);
int descer(struct Elevador *e);
int isLotado(struct Elevador e);
int carrega(struct Elevador *e);
void descarrega(struct Elevador *e);