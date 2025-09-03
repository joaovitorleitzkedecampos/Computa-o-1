/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
	int  n, i=0;
	float test1, test2, test3, mp;

	printf("digite a quantidade de testes");
	scanf("%d",&n);
	for(i=0; n>i; i++)
	{
		printf("digite as tres notas");
		scanf("%f""%f""%f",&test1,&test2,&test3);

		mp=(test1*2+test2*3+test3*5)/10;
		printf("%.1f\n", mp);
	}

	return 0;
}