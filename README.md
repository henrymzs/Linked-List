# Sistema de Gerenciamento de Contatos

Este é um projeto em C que implementa um sistema de gerenciamento de contatos, utilizando listas ligadas. Ele permite adicionar, remover, buscar e listar contatos de forma eficiente.

## Estrutura do Programa

### O programa foi estruturado utilizando os conceitos de listas ligadas, onde cada contato é armazenado em um nó, e cada nó aponta para o próximo. O programa oferece um menu interativo para a manipulação dos contatos.

- **Arquivos do Projeto**:
  
  - `Main.c`: Contém a função principal e o menu interativo.
  - `Contato.c`: Contém as funções para manipulação dos contatos, como adicionar, remover, listar e buscar.
  - `Contato.h`: Define a estrutura do contato e declara as funções para manipulação da lista de contatos.

- **Funcionalidades**:
  - `Adicionar Contato`:Adiciona um novo contato à lista de contatos.
  - `Remover Contato`:Remove um contato da lista com base no seu ID.
  - `Listar Contatos`: Exibe todos os contatos armazenados na lista.
  - `Buscar Contatos`: Busca um contato pelo seu ID.

## Exemplo de Uso
Ao executar o programa, você verá um menu interativo no console, onde poderá adicionar, buscar, remover e listar contatos. Veja um exemplo de como o programa pode se comportar:
- Menu de opções:
```bash
--- MENU ---
1. Adicionar contato
2. Remover contato
3. Buscar contato
4. Listar contatos
0. Sair
Escolha uma opção:
```
## Tecnologias Utilizadas
- C: Linguagem principal utilizada para desenvolver o sistema.

## Instalação e Configuração

1. **Instalar o compilador C:**:
   - Caso ainda não tenha o compilador C instalado, siga as instruções para instalar o GCC ou use um ambiente de desenvolvimento integrado (IDE) como o Code::Blocks ou Visual Studio Code.

2. **Clonar o repositório**:
   Clone este repositório para a sua máquina local:
   ```bash
   git clone https://github.com/henrymzs/listaLigada.git
3. **Compilar o código: Após clonar o repositório ou baixar os arquivos, compile o código com o seguinte comando:**:
   ```bash
   gcc src/Main.c src/Contato.c -o programa
3. **Rodar o programa: Após compilar, execute o programa com o comando:**:
   ```bash
   ./programa
