#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int bispo;
    int torre;
    int rainha;
    int cavalo = 0;
    int movimentacao;

    // Implementação de Movimentação do Bispo
    for(bispo = 0 ; bispo < 5 ; bispo++ )
    {
        printf("Bispo: %d Diagonal, cima! \n", bispo);
    }    

    // Implementação de Movimentação da Torre
    for(torre = 0 ; torre < 5 ; torre++)
    {
        printf("Torre: %d Direita! \n", torre);
    }   

    // Implementação de Movimentação da Rainha
    for(rainha = 0 ; rainha < 8 ; rainha++)
    {
        printf("Rainha: %d Esquerda!\n", rainha);
    }
   
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
