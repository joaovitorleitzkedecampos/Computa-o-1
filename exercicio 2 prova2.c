#include <stdio.h>
#define TAM 10

float calculaMedia(int vetor[], int tamanho) {
	int soma = 0;
	for (int i = 0; i < tamanho; i++) {
		soma += vetor[i];
	}
	return (float)soma / tamanho;
}
int main() {
	FILE *arquivo;
	int numeros[TAM];

	arquivo = fopen("numeros.txt", "w");
	if (arquivo == NULL) {
		printf("Erro ao abrir o arquivo para escrita.\n");
		return 1;
	}

	printf("Digite %d numeros inteiros:\n", TAM);
	for (int i = 0; i < TAM; i++) {
		printf("NC:mero %d: ", i + 1);
		scanf("%d", &numeros[i]);
		fprintf(arquivo, "%d\n", numeros[i]);
	}

	fclose(arquivo);

	arquivo = fopen("numeros.txt", "r");
	if (arquivo == NULL) {
		printf("Erro ao abrir o arquivo para leitura.\n");
		return 1;
	}

	int vetorLido[TAM];
	int i = 0;
	while (i < TAM && fscanf(arquivo, "%d", &vetorLido[i]) == 1) {
		i++;
	}

	fclose(arquivo);

	float media = calculaMedia(vetorLido, i);

	printf("\nNC:meros lidos do arquivo:\n");
	for (int j = 0; j < i; j++) {
		printf("%d ", vetorLido[j]);
	}
	printf("\n\nConteC:do do vetor:\n");
	for (int j = 0; j < i; j++) {
		printf("vetor[%d] = %d\n", j, vetorLido[j]);
	}
	printf("\nMC)dia dos nC:meros: %.2f\n", media);

	return 0;

}
