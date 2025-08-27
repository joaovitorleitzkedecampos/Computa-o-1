#include <stdio.h>

int main() {
    float A, B, C;

    
    printf("Digite os três lados do triângulo (A, B, C):\n");
    scanf("%f %f %f", &A, &B, &C);

    
    if (A <= 0 || B <= 0 || C <= 0) {
        printf("Os lados devem ser maiores que zero.\n");
    } else if (A + B > C && A + C > B && B + C > A) {
        
        if (A == B && B == C) {
            printf("Triângulo Equilátero\n");
        } else if (A == B || A == C || B == C) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os valores fornecidos não formam um triângulo.\n");
    }

    return 0;
}
