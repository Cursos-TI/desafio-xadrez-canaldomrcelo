#include <stdio.h>

int main() {
    int escolha;
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int i;
    int contadorBispo;
    int contadorRainha;

    // Exibe o menu para o usuário
    printf("Escolha uma peça para movimentar:\n");
    printf("1 - Torre (5 casas para a Direita)\n");
    printf("2 - Bispo (5 casas na Diagonal Cima Direita)\n");
    printf("3 - Rainha (8 casas para a Esquerda)\n"); 
    printf("Digite o número da sua escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        // Torre
        printf("\nMovimento da Torre:\n");
        for (i = 0; i < casasTorre; i++) {
            printf("Direita\n");
        }
    } else {
        if (escolha == 2) {
            // Bispo
            printf("\nMovimento do Bispo:\n");
            contadorBispo = 0;
            while (contadorBispo < casasBispo) {
                printf("Cima Direita\n");
                contadorBispo++;
            }
        } else {
            if (escolha == 3) {
                // Rainha
                printf("\nMovimento da Rainha:\n");
                contadorRainha = 0;
                do {
                    printf("Esquerda\n");
                    contadorRainha++;
                } while (contadorRainha < casasRainha);
            } else {
                // Opção inválida
                printf("\nOpção inválida. Por favor, escolha 1, 2 ou 3.\n");
            }
        }
    }

    return 0;
}
