#include <stdio.h>

void printMultiplesOf4(int n, int current) {
    if (current > n) {
        return; // Condição de parada
    }

    printf("%d ", current * 4); // Imprime o múltiplo de 4
    printMultiplesOf4(n, current + 1); // Chamada recursiva com o próximo número
}

int main(void) {
    int n;

    printf("n: ");
    scanf("%d", &n); // Lê o valor de n

    printMultiplesOf4(n, 1); // Inicia a função com current = 1

    printf("\n"); // Nova linha após a saída
    return 0; // Retorna sucesso
}
