#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Definicoes de tipos
    typedef float termo;
    typedef float razao;

    int continuar = 1; // Variavel para controlar o loop principal

    while (continuar) {
        int opcao;
        printf("\nO que deseja calcular?\n");
        printf("1. Progressao Aritmetica\n2. Progressao Geometrica\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado apos o scanf

        switch (opcao) {
            case 1: {
                // Progressao Aritmetica
                termo aUm;  // Primeiro termo
                razao r;    // Razao
                int n;      // Quantidade de termos

                printf("\nInsira os seguintes dados:\n");
                printf("Primeiro termo: ");
                scanf("%f", &aUm);
                printf("Razao: ");
                scanf("%f", &r);
                printf("Numero de termos: ");
                scanf("%d", &n);

                printf("\nProgressao Aritmetica:\n");
                for (int i = 0; i < n; i++) {
                    termo termoAtual = aUm + i * r;  // Formula: a_n = a_1 + (n-1) * r
                    printf("Termo %d: %.2f\n", i + 1, termoAtual);
                }
                break;
            }
            case 2: {
                // Progressao Geometrica
                termo aUm;  // Primeiro termo
                razao r;    // Razao
                int n;      // Quantidade de termos

                printf("\nInsira os seguintes dados:\n");
                printf("Primeiro termo: ");
                scanf("%f", &aUm);
                printf("Razao: ");
                scanf("%f", &r);
                printf("Numero de termos: ");
                scanf("%d", &n);

                printf("\nProgressao Geometrica:\n");
                for (int i = 0; i < n; i++) {
                    termo termoAtual = aUm * pow(r, i);  // Formula: a_n = a_1 * r^(n-1)
                    printf("Termo %d: %.2f\n", i + 1, termoAtual);
                }
                break;
            }
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
                continue;
        }

        // Pergunta se o usuario deseja continuar ou sair
        printf("\nDeseja realizar outro calculo? (1 para continuar, 0 para sair): ");
        scanf("%d", &continuar);
        getchar(); // Limpa o buffer do teclado
    }

    printf("\nObrigado por usar o programa. Pressione qualquer tecla para sair...\n");
    getchar(); // Espera que o usuario pressione uma tecla antes de sair

    return 0;
}
