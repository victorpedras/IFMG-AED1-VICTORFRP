//Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que estão em ambos os vetores. (Não deve conter números repetidos.)

#include <stdio.h>
int main() {
    int vetor1[10], vetor2[10], vetorresult[10];

    //Leitura dos vetores
    puts("PRIMEIRO VETOR");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d do 1 vetor: ", i);
        scanf(" %d", &vetor1[i]);
    }
    
    puts("SEGUNDO VETOR");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d do 2 vetor: ", i);
        scanf(" %d", &vetor2[i]);
    }

    //Analisando
    for (int i = 0; i < 10; i++) {
        for (int c = 0; c < 10; c++) {
            if (vetor1[i] == vetor2[c]) {
                vetorresult[i] = vetor1[i];
                break;
            }
            else {
                vetorresult[i] = 0;
            }
        }
    }
    
    //Mostrando o vetor resultado
    for (int i = 0; i < 10; i++) {
        if (vetorresult[i] != 0) {
            printf("%d ", vetorresult[i]);
        }
    }
    return 0;
}