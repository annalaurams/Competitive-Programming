#include <iostream>

using namespace std;

typedef struct No{

    int valor;
    No* esquerda;
    No* direita;

}No;

No* raiz = NULL;

No* criar_No(int valor)
{
    No* novo = new No;
	if (novo == NULL) return NULL; 

	novo->valor = valor;
	novo->esquerda = NULL;
	novo->direita = NULL;

	return novo;
}

No* inserir_na_arvore(No* no, int valor)
{
	if (no->valor > valor && no->esquerda == NULL) {
		no->esquerda = criar_No(valor);
		return no->esquerda;
	}
	else if (no->valor < valor && no->direita == NULL) {
		no->direita = criar_No(valor);
		return no->direita;
	}
	else if (no->valor > valor) 
		return inserir_na_arvore(no->esquerda, valor);
	
	else if (no->valor < valor) 
		return inserir_na_arvore(no->direita, valor);
	
	else 
		return NULL;
	
}

void inserir()
{
	int valor;

	cin >> valor;

	if (raiz == NULL) raiz = criar_No(valor);

	else  inserir_na_arvore(raiz, valor);
	
}

void prefixo(No* no) {

    if (no == nullptr) return;

    cout << " " << no->valor;
    prefixo(no->esquerda);
    prefixo(no->direita);
}

void infixo(No* no) {

    if (no == nullptr) return;

    infixo(no->esquerda);
    cout << " " << no->valor;
    infixo(no->direita);
}

void posfixo(No* no) {
    
    if (no == nullptr) return;
    
    posfixo(no->esquerda);
    posfixo(no->direita);

    cout << " " << no->valor; 
}

int main (){

    int C = 0, C2 = 0;
    int tam = 0, num = 0, tam2 = 0;
    cin >> C;

    while(C2 < C){

        cin >> tam;
        
        while(tam2 < tam){
            inserir();
            tam2++;
        }

        cout << "Case " << C2+1 << ":";

        int teste;
        teste = raiz->valor;

        cout << "\nPre.:";
        prefixo(raiz);

        cout << "\nIn..:";
        infixo(raiz);

        cout << "\nPost:";
        posfixo(raiz);
        
       cout << endl << endl;
        
        tam2 = 0;
        C2++;

        raiz = NULL;
    }

    return 0;
}
