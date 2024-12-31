#include "Contato.h"
#include <stdio.h>



void adicionarContato(Contato **lista, Contato novoContato) {
    Contato *novo = malloc(sizeof(Contato)); // aloca memoria para o novo contato
    if (novo == NULL) {
        printf("Erro ao alocar memória para novo contato.\n");
        return;
    }
    strcpy(novo->nome, novoContato.nome); 
    strcpy(novo->telefone, novoContato.telefone);
    strcpy(novo->email, novoContato.email);
    novo->id = novoContato.id; 

    novo->proximo = NULL; 

    if (*lista == NULL) {
        *lista = novo;
    } else {
        Contato *atual = *lista; 
        while (atual->proximo != NULL) { 
            atual = atual->proximo;
        }
        atual->proximo = novo; 
    }
    printf("Contato adicionado com sucesso!\n");
}

void removerContato(Contato **lista, int id) {
    Contato *atual = *lista; 
    Contato *anterior = NULL; 
    
    while (atual != NULL) {
        if (atual->id == id) { 
            if (anterior == NULL) { 
                *lista = atual->proximo; 
            } else {
                anterior->proximo = atual->proximo; 
            }
            free(atual); 
            printf("Contato removido com sucesso!\n");
            return;
        }
        anterior = atual; 
        atual = atual->proximo; 
    }
    
    printf("Contato com ID %d não encontrado!\n", id);
}

void listarContatos(Contato *lista) {
    Contato *atual = lista; 
    int encontrou = 0; 
    
    printf("Listagem de Contatos:\n");
    
    while (atual != NULL) {
        printf("-------------------\n");
        printf("ID: %d\n", atual->id);           
        printf("Nome: %s\n", atual->nome);       
        printf("Telefone: %s\n", atual->telefone); 
        printf("Email: %s\n", atual->email);     
        encontrou = 1; 
        atual = atual->proximo; 
    }
    
    if (!encontrou) {
        printf("Nenhum contato encontrado.\n");
    }
}

Contato* buscarContato(Contato *lista, int id) {
    Contato *atual = lista; 
    
    while (atual != NULL) {
        if (atual->id == id) { 
            return atual;
        }
        atual = atual->proximo; 
    }
    
    return NULL; 
}
