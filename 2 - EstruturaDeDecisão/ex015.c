// Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. 
// Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
// Dicas:
// Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
// Triângulo Equilátero: três lados iguais;
// Triângulo Isósceles: quaisquer dois lados iguais;
// Triângulo Escaleno: três lados diferentes;



#include<stdio.h>

main()
{
	int l1, l2, l3;
	printf("\nDigite os tres lados de um triangulo: ");
	scanf("%d%d%d",&l1, &l2, &l3);
	
	if ((l1 + l2 > l3) || (l2 + l3 > l1))
	{
		if ((l1 != l2) && (l1 != l3) && (l2 != l3))
		{
			printf("\nTriangulo Escaleno");
		}
		else if ((l1 == l2) && (l2 == l3))
		{
			printf("\nTriangulo Equilatero");
		}
		else if ((l1 == l2) || (l1 == l3) || (l2 == l3))
		{
			printf("\nTriangulo Isosceles");
		}
	}
	else
	{
		printf("\nO triangulo nao existe.");
	}
}
