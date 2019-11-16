// Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58

#include<stdio.h>
main()
{
	float altura;
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	printf("Sua peso ideal: %2.f Kg", (72.7*altura) - 58);
}

