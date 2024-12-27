#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/*
    void loopCavalo (){
        if(){
        
        }else {
        }
    }
*/

int main() {
    
    int bispo, torre, rainha;
    int cavalo_mov3, cavalo_mov1;
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
        // Implementação de Movimentação do Bispo 5x
        printf("Movimentação Bispo \n");

        for (bispo = 0; bispo < 5; bispo++)
        {
            do
            {
               printf("Cima, ");               
            } while (bispo == 5);
            
        printf("direita! \n");
        }
    break;

    case 2:
        // Implementação de Movimentação da Torre
        printf("Movimentação Torre \n");

        for(torre = 0 ; torre < 5 ; torre++)
        {
            printf("Direita! \n");
        }        
    break;

    case 3:
        // Implementação de Movimentação da Rainha
        printf("Movimentação Rainha \n");

        for(rainha = 0 ; rainha < 8 ; rainha++){
            printf("Esquerda!\n");
        }        
    break;

    case 4:
        //  Implementação de Movimentação do Cavalo
        printf("Movimentação Cavalo \n");

        for ( cavalo = 0; cavalo < 1; cavalo++){
            while (cavalo < 3){            
            printf("baixo, "); //Movimentação Vertical
            cavalo++;
            }      
        printf("esquerda!\n"); //Movimentação Horizontal
        }

   /* -------------------------------------------------------------  
     for(cavalo_mov1 = 0 , cavalo_mov3 = 6 ; cavalo_mov3 > 3 ; cavalo_mov1++, cavalo_mov3--){

        printf("direita, ");
        if(cavalo_mov3 == 3)break;
    }        
    printf("cima! \n");
    */

    break;
    
    default:
        printf("Comando inválido!!!\n");
    break;
    }  


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
