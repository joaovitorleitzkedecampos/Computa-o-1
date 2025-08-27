#include <stdio.h>
#include <math.h>

int main() {
	char opcao;
	float valor1, valor2, valor3, resultado;


	printf("Digite uma opcao (A, P, G, H): ");
	scanf(" %c", &opcao);
	printf("Digite tres valores: ");
	scanf("%f %f %f", &valor1, &valor2, &valor3);



	if (opcao == 'A' || 'a') {

		resultado = (valor1 + valor2 + valor3) / 3;
		printf("Media Aritmetica: %.2f\n", resultado);
	} else if (opcao == 'P' || 'p') {

		resultado = (valor1 * 1 + valor2 * 2 + valor3 * 3) / 6;
		printf("Media Ponderada: %.2f\n", resultado);
	} else if (opcao == 'G' || 'g') {

		resultado = cbrt(valor1 * valor2 * valor3);
		printf("Media Geometrica: %.2f\n", resultado);
	} else if (opcao == 'H' || 'h') {

		if (valor1 != 0 && valor2 != 0 && valor3 != 0) {
			resultado = 3 / ((1 / valor1) + (1 / valor2) + (1 / valor3));
			printf("Media Harmonica: %.2f\n", resultado);
		} else {
			printf("Erro: Valores nao podem ser zero para calcular a media harmonica.\n");
		}
	} else {

		printf("Erro: Opcao invalida.\n");
	}

	return 0;
}
