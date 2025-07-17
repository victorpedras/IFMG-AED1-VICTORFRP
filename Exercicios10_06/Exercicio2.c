//Faça um programa que calcule o desvio padrão de um vetor v contendo n = 10 números, onde m é a média do vetor.


#include <stdio.h>
#include <math.h>

int main() {
    int i, vetor[10];
    float media = 0, resultado = 0;

    //Leitura do vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d do vetor: ", i);
        scanf(" %d", &vetor[i]);
        media = media + vetor[i];
    }

    //Cálculos da fórmula 
    media = media / 10;
    for (i = 0; i < 10; i++) {
        resultado = resultado + pow(vetor[i] - media, 2);
    }

    resultado = resultado / 10;
    resultado = sqrt(resultado);

    //Mostrando o resultado
    printf("Desvio padrao do vetor informado: %.2f", resultado);

    return 0;
}