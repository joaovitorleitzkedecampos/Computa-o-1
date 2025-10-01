#include <stdio.h>

void alterarValores(int a, int b, int c, int *pa, int *pb) {
    
    *pa = a + b + c;  
    *pb = a * b * c;  

    
    printf("Dentro da função - Valores por valor: a=%d, b=%d, c=%d", a, b, c);
    printf("Dentro da função - Valores alterados através de ponteiros: *pa=%d, *pb=%d", *pa, *pb);
}

int main() {
    int x = 1, y = 2;      
    int a = 3, b = 4, c = 5;  

    printf("Antes da função: x=%d, y=%d", x, y);

    
    alterarValores(a, b, c, &x, &y);

    printf("Depois da função: x=%d, y=%d", x, y);

    return 0;
}