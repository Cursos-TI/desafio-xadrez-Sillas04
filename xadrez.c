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
    int menu_inicio;

    printf("----- Qual peça deseja movimentar? -----\n\n");
    printf("1 - Bispo: \n");
    printf("2 - Torre: \n");
    printf("3 - Rainha: \n");
    printf("4 - Cavalo: \n");
    scanf("%d", &menu_inicio);
   

    switch (menu_inicio)
    {
    case 1:
        // Implementação de Movimentação do Bispo
        printf("Movimentação Bispo \n");
        for(bispo = 0 ; bispo < 5 ; bispo++ )
        {
            printf("%d Casa, diagonal superior direita! \n", bispo);
        }      
    break;

    case 2:
        // Implementação de Movimentação da Torre
         printf("Movimentação Torre \n");
        for(torre = 0 ; torre < 5 ; torre++)
        {
            printf("%d Casa, direita! \n", torre);
        }        
    break;

    case 3:
        // Implementação de Movimentação da Rainha
         printf("Movimentação Rainha \n");
        for(rainha = 0 ; rainha < 8 ; rainha++)
        {
            printf("%d Casa, esquerda!\n", rainha);
        }        
    break;

    case 4:
        /*  Espaço reservado para implementação cavalo!
            Cavalo move-se em tres casas com a última se tornando um "L" Ex: baixo,baixo, esquerda.
            loops aninhados!

        */
    break;
    
    default:
        printf("Comando inválido!!!\n");
    break;
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
