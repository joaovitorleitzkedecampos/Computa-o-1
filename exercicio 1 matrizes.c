#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define LINHAS 3
#define COLUNAS 3
#define TAM_STRING 50


int ehVogal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}


int ehConsoante(char c) {
    c = tolower(c);
    return (isalpha(c) && !ehVogal(c));
}


void inverterString(char str[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char matriz[LINHAS][COLUNAS][TAM_STRING];

    printf("Preencha a matriz 3x3 com strings (máx 50 caracteres cada):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite a string para a posição [%d][%d]: ", i, j);
            fgets(matriz[i][j], TAM_STRING, stdin);

            
            size_t len = strlen(matriz[i][j]);
            if (len > 0 && matriz[i][j][len - 1] == '\n') {
                matriz[i][j][len - 1] = '\0';
                len--; 
            }

           
            if (len > 0) {
                
                if (ehVogal(matriz[i][j][0]) && ehConsoante(matriz[i][j][strlen(matriz[i][j]) - 1])) {
                    inverterString(matriz[i][j]);
                }
            }
        }
    }

    
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%s\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
