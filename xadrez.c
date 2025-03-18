#include <stdio.h>

#include <stdio.h>

// Função recursiva para movimentação da Torre (para a direita)
void recursivo1(int i) {
    if (i > 0) {
        printf("Direita\n");
        recursivo1(i - 1);  
    }
}

// Função recursiva para movimentação do Bispo (diagonal para cima e direita) com loops aninhados
void recursivo2(int j) {
    for (int i = 0; i < j; i++) {  // Loop externo controla o movimento vertical (para cima)
        printf("Cima\n");
        for (int k = 0; k < 1; k++) {  // Loop interno controla o movimento horizontal (para a direita)
            printf("Direita\n");
        }
    }
}

// Função recursiva para movimentação da Rainha (para a esquerda)
void recursivo3(int l) {
    if (l > 0) {
        printf("Esquerda\n");
        recursivo3(l - 1);  
    }
}

// Função para movimentar o Cavalo (movimento em 'L' - 2 casas para cima e 1 para a direita) com controle de fluxo
void movimentoCavalo() {
    int i, j;
    
    // O Cavalo se move para cima (2 casas) e depois para a direita (1 casa)
    // Loop Externo: movimento para cima (2 casas)
    for (i = 0; i < 2; i++) {
        printf("Cima\n");  // O Cavalo se move para cima
    }
    
    // Loop Interno: movimento para a direita (1 casa)
    for (j = 0; j < 1; j++) {
        printf("Direita\n");  // O Cavalo se move para a direita
    }
}

int main() {
    int torre = 1; // Número de casas a serem movidas pela Torre
    int bispo = 1; // Número de casas a serem movidas pelo Bispo
    int rainha = 2; // Número de casas a serem movidas pela Rainha

    // Movimento da Torre (1 casas para a direita)
    printf("Movimentação da Torre (1 casas para a direita): \n");
    recursivo1(torre);

    // Movimento do Bispo (1 casas na diagonal cima, direita)
    printf("\nMovimento do Bispo (1 casas na diagonal cima, direita):\n");
    recursivo2(bispo);

    // Movimento da Rainha (2 casas para a esquerda)
    printf("\nMovimentação da Rainha (2 casas para a esquerda): \n");
    recursivo3(rainha);

    // **Movimentação do Cavalo (movimento em 'L'):**
    printf("\nMovimentação do Cavalo (movimento em 'L'): \n");
    movimentoCavalo();  // Chama a função para mover o Cavalo

    return 0;
}