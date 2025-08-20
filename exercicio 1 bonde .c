
#include<stdio.h>
int main() {
	int num1, num2, aux;

	printf("digite o numero de alunos:");
	scanf("%d",&num1);

	printf("digite o numero de monitores");
	scanf("%d",&num2);

	aux = num1 + num2;

	if (aux <= 50)
	{
		printf("podem fazer uma viagem");
	}
	else
	{
		printf("nao poderam fazer em uma viagem");
	}
	return 0;
}
