//
// Created by Laercio Serra (laercio.serra@gmail.com) on 31/10/2025.
// Desafio de Xadrez - MateCheck
// Niveis: novato, aventureiro e mestre
//
#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiroNovato[5][5] = {0};
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Posiciona um navio vertical de 3 posições a partir de (1, 2).
    // Ocupará as posições (1, 2), (2, 2) e (3, 2).
    tabuleiroNovato[1][2] = 3;
    tabuleiroNovato[2][2] = 3;
    tabuleiroNovato[3][2] = 3;

    // Posiciona um navio horizontal de 3 posições terminando em (4, 3).
    // Ocupará as posições (4, 1), (4, 2) e (4, 3).
    tabuleiroNovato[4][1] = 3;
    tabuleiroNovato[4][2] = 3;
    tabuleiroNovato[4][3] = 3;

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf(">> Navio vertical posicionado em: (1, 2), (2, 2), (3, 2)\n");
    printf("0 3 0 0 0\n");
    printf("0 3 0 0 0\n");
    printf("0 3 0 0 0\n");
    printf("0 0 0 0 0\n");
    printf("0 0 0 0 0\n");
    printf(">> Navio horizontal posicionado em: (4, 1), (4, 2), (4, 3)\n");
    printf("0 0 0 0 0\n");
    printf("0 0 0 0 0\n");
    printf("0 0 0 0 0\n");
    printf("3 3 3 0 0\n");
    printf("0 0 0 0 0\n");
    printf("================================================================================\n");

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    int tabuleiroAventureiro[10][10] = {0};
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Navio vertical
    printf(">> Navio vertical posicionado em: (1, 2), (2, 2), (3, 2), (4, 2)\n");
    // Navio horizontal
    printf(">> Navio horizontal posicionado em: (7, 4), (7, 5), (7, 6), (7, 7)\n");
    // Navio diagonal principal
    printf(">> Navio diagonal principal posicionado em: (1, 1), (2, 2), (3, 3), (4, 4), (5, 5)\n");
    // Navio diagonal secundária
    printf(">> Navio diagonal secundaria posicionado em: (1, 10), (2, 9), (3, 8), (4, 7), (5, 6)\n");
    // Sugestão: Exiba o tabuleiro completo no console,
    // mostrando 0 para posições vazias e 3 para posições ocupadas.
    for (int i = 0; i < 4; i++) tabuleiroAventureiro[i][1] = 3;
    for (int j = 3; j < 7; j++) tabuleiroAventureiro[6][j] = 3;
    for (int i = 0; i < 5; i++) tabuleiroAventureiro[i][i] = 3;
    for (int i = 0; i < 5; i++) tabuleiroAventureiro[i][9 - i] = 3;
    // Exibir tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroAventureiro[i][j]);
        }
        printf("\n");
    }
    printf("================================================================================\n");
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    
    // criar e imprimir matrizes do tipo cone
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    int cone[3][5] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 2 - i; j <= 2 + i; j++) {
             cone[i][j] = 1;
        }
    }

    printf(">> Matriz Cone\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // criar e imprimir matriz do tipo cruz
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    int cruz[3][5] = {0};
    // Linha do meio
    for (int j = 0; j < 5; j++) {
        cruz[1][j] = 1;
    }
    // Coluna do meio
    for (int i = 0; i < 3; i++) {
        cruz[i][2] = 1;
    }

    printf("\n>> Matriz Cruz\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // criar e imprimir matriz do tipo octaedro
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    int octaedro[3][5] = {0};
    // Parte horizontal
    for (int j = 1; j <= 3; j++) {
        octaedro[1][j] = 1;
    }
    // Parte vertical
    for (int i = 0; i < 3; i++) {
        octaedro[i][2] = 1;
    }

    printf("\n>> Matriz Octaedro\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
