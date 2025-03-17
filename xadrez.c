#include <stdio.h>

int main() {

    printf("Movimetação da Torre (5 casas para a direita): \n");
    //Usamos o for para mover 5 casas para a direita
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Movendo torre para a direita \n");
    }

    printf("\n Movimento do Bispo (5 casas na diagonal cima, direita):\n");
    //Usamos o while para mover 5 casas na diagonal Cima e a Direita
    int j = 0;
    while (j < 5) 
    {
        printf(" Movendo o Bispo para Cima direita\n");
        j++;
    }

    printf("\nMovimentação da Rainha (8 casas para a esquerda): \n");
    //Usamos o do-while para movimentar 8 casas a esquerda
    int k = 0;
    
    do 
    {
       printf("Movimentação da Rainha para a esquerda\n");
        k++;
    } while (k < 8);

    return 0;



    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

}
