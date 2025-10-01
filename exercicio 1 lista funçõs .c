#include <stdio.h>


void questao01(int *a, int *b) {
	if (a != 0 && b != 0) {
		(*a)--;
		(*b)++;
	}
}

int main() {
	int num1, num2;


	printf("Digite dois numeros inteiros:\n");
	if (scanf("%d %d", &num1, &num2) != 2) {
		printf("Entrada invC!lida. Por favor, insira dois nC:meros inteiros.\n");
		return 1;
	}

	printf("Antes da funcao: num1 = %d, num2 = %d\n", num1, num2);

	questao01(&num1, &num2);

	printf("Depois da funcao: num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}
