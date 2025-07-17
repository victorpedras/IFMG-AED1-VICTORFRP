//Faça um programa para ler dois vetores, A e B, com 5 números inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.

#include <stdio.h>
int main() {
    int vetor1[5], vetor2[5], vetor1_2[5], i;

    //Leitura e calculo dos vetores
    for(i = 0; i < 5; i++) {

        //Leitura vetor1
        printf("Digite o valor da posicao %d do primeiro vetor: ", i);
        scanf(" %d", &vetor1[i]);
        
        //Leitura vetor2
        printf("Digite o valor da posicao %d do segundo vetor: ", i);
        scanf(" %d", &vetor2[i]);

        //Calculo vetor1_2
        vetor1_2[i] = (vetor1[i] - vetor2[i]);
    }
    puts("----------------------------------------------------------");

    //Mostrando vetores 
    printf("-------Vetor 1-------\n");
    for(i = 0; i < 5; i++) {
        printf("| %d ", vetor1[i]);
    }
    puts("|");

    puts("");
    printf("-------Vetor 2-------\n");
    for(i = 0; i < 5; i++) {
        printf("| %d ", vetor2[i]);
    }
    puts("|");

    puts("");
    printf("-----Vetor 1 - 2-----\n");
    for(i = 0; i < 5; i++) {
        printf("| %d ", vetor1_2[i]);
    }
    puts("|");
    return 0;
}