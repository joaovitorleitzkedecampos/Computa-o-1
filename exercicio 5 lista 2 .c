#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_magico, palpite, tentativas = 0;


    srand(time(0));
    numero_magico = rand() % 500 + 1; 

    printf("Adivinhe o número mágico entre 1 e 500!\n");

    while (1) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numero_magico) {
            printf("O número mágico é MAIOR que %d.\n", palpite);
            continue;
        }

        if (palpite > numero_magico) {
            printf("O número mágico é MENOR que %d.\n", palpite);
            continue;
        }

        
        printf("Parabéns! Você acertou o número mágico %d em %d tentativa(s).\n", numero_magico, tentativas);
        printf(" ");
        if (tentativas <= 3) {
            printf("\\o/\n");
        } else if (tentativas <= 6) {
            printf(":-D\n");
        } else if (tentativas <= 10) {
            printf(":-)\n");
        } else {
            printf(":-\\\n");
        }
        break;
    }

    return 0;
}