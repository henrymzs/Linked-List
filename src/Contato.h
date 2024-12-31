#ifndef CONTATO_H
#define CONTATO_H  

typedef struct Contato {
    char nome[50];
    char telefone[20];
    char email[50];
    int id;
    struct Contato *proximo; // aponta para o proximo contato na lista, se for NULL não existe contato
} Contato;


#endif 
