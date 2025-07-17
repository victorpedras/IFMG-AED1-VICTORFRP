//Crie uma matriz 5 x 5 com comando de repetição. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida

#include <stdio.h>
int main() {
    
    int matriz[5][5];

    //Preenchendo a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            }
            else {
                matriz[i][j] = 0;
            }
        }
    }

    //Mostrando a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        puts("");
    }
    
    return 0;
}