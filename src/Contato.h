#ifndef CONTATO_H
#define CONTATO_H  

typedef struct Contato {
    char nome[50];
    char telefone[20];
    char email[50];
    int id;
    struct Contato *proximo; 
} Contato;

void adicionarContato(Contato **lista, Contato novoContato);
void removerContato(Contato **lista, int id); 
Contato* buscarContato(Contato *lista, int id); 
void listarContatos(Contato *lista);

#endif 
