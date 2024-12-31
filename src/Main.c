#include "Contato.h" 
#include <stdio.h>

int main() {
    Contato *lista = NULL; 
    int opcao; 
    int id; 
    Contato novoContato; 

    while (1) {
        printf("--- MENU ---:\n");
        printf("1. Adicionar Contato\n");
        printf("2. Remover Contato\n");
        printf("3. Buscar Contato\n");
        printf("4. Listar Todos os Contatos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("Digite o nome do contato: ");
                scanf(" %[^\n]", novoContato.nome); 
                printf("Digite o telefone do contato: ");
                scanf(" %[^\n]", novoContato.telefone); 
                printf("Digite o e-mail do contato: ");
                scanf(" %[^\n]", novoContato.email); 
                printf("Digite o ID do contato: ");
                scanf("%d", &novoContato.id); // 
                adicionarContato(&lista, novoContato); 
                break;

            case 2: 
                printf("Digite o ID do contato para remover: ");
                scanf("%d", &id); 
                removerContato(&lista, id); 
                break;

            case 3: 
                printf("Digite o ID do contato para buscar: ");
                scanf("%d", &id); 
                Contato *contatoEncontrado = buscarContato(lista, id); 
                if (contatoEncontrado != NULL) {
                    printf("-------------------\n");
                    printf("Contato encontrado:\n");
                    printf("Nome: %s\n", contatoEncontrado->nome);
                    printf("Telefone: %s\n", contatoEncontrado->telefone);
                    printf("Email: %s\n", contatoEncontrado->email);
                    printf("ID: %d\n", contatoEncontrado->id);
                } else {
                    printf("Contato não encontrado.\n");
                }
                break;

            case 4: 
                listarContatos(lista); 
                break;

            case 0: 
                printf("Saindo do programa...\n");
                while (lista != NULL) {
                    Contato *temp = lista;
                    lista = lista->proximo;
                    free(temp);
                }
                return 0;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }

    return 0;
}
