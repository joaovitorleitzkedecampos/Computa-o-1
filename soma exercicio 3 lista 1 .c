#include <stdio.h>
 int main()
 {
	 int i;
	 float f;
	char c;
	
	 printf("Digite um caractere: ");
	 scanf("%c",&c);
	 printf("Digite um valor inteiro: ");
	 scanf("%i",&i);
	 printf("Entre com um numero de ponto flutuante (valor nao inteiro): ");
	 scanf("%f",&f);
	 printf ("%c,%i,%f", c,i,f );
	
	 return 0;
}