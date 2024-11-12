#include <stdio.h>

// função para calcular o valor de um elemento no Triângulo de Pascal
int binomial(int n, int k)
{
    int res = 1;

    // calculando o valor de n! / (k! * (n - k)!)
    if (k > n - k)
    {
        k = n - k;
    }

    for (int i = 0; i < k; i++)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main()
{
    int linhas;

    printf("Digite o número de linhas do Triângulo de Pascal: ");
    scanf("%d", &linhas);

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", binomial(i, j));
        }
        printf("\n");
    }

    return 0;
}
