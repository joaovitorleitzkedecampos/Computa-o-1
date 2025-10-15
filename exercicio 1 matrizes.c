#include <stdio.h>
#include <string.h>
#define LINHAS 3
#define COLUNAS 3
#define TAM_STRING 50

int main() {
    char matriz[LINHAS][COLUNAS][TAM_STRING];
    char primeiraLetra, ultimaletra, pl, ul;
    char str[100];
    
    printf("Preencha a matriz 3x3 com strings (max 50 caracteres cada):");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("Digite a string para a posição [%d][%d]: ", i, j);
            
            fgets(matriz[i][j], TAM_STRING, stdin);

           
            size_t len = 0;
            while (matriz[i][j][len] != '\0') len++;
            if (len > 0 && matriz[i][j][len - 1] =='\0') {
                matriz[i][j][len - 1] = '\0';
            }
        }
    }

    
    printf("Matriz preenchida:");
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            printf("%s\t", matriz[i][j]);
        }
        
    }
void inverterString(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;
    
   
    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

    fgets(str, sizeof(str), stdin); 

    
    str[strcspn(str, "")] = 0; 

    if (primeiraLetra == 'a' || primeiraLetra == 'e' || primeiraLetra == 'i' || 
        primeiraLetra == 'o' || primeiraLetra == 'u') {
        printf("A string começa com uma vogal.");
        }
        
        inverterString(str);
        printf("String invertida: %s", str);

    

    return 0;
}