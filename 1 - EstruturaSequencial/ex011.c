// Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
//   o produto do dobro do primeiro com metade do segundo .
//   a soma do triplo do primeiro com o terceiro.
//   o terceiro elevado ao cubo.


#include<stdio.h>
main()
{
	int n1, n2;
	float n3;
	printf("Digite dois nuemro inteiro: ");
	scanf("%d%d",&n1, &n2);
	printf("Digite um numero real: ");
	scanf("%f",&n3);
	printf("\n1 Situacao: %d", (n1*2)* (n2/2));
	printf("\n2 Situacao: %2.f", (n1*3)+ n3);
	printf("\n3 Situacao: %2.f", n3*n3*n3);
}

