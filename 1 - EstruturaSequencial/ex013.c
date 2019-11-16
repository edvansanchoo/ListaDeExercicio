// Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//   Para homens: (72.7*h) - 58
//   Para mulheres: (62.1*h) - 44.7


#include<stdio.h>

main()
{
	int sexo;
	float altura;
	printf("[1] para homem\n[2] para mulher\n========================\nSua escolha: ");
	scanf("%d",&sexo);
	printf("\nDigite sua altura: ");
	scanf("%f",&altura);
	if (sexo == 1)
	{
		printf("Seu peso ideal: %2.f",(72.7*altura) - 58);
	}
	else if (sexo == 2)
	{
		printf("Seu peso ideal: %2.f",(62.1*altura) - 44.7);
	}
	else
	{
		printf("\nOpss ocorreu um erro!!!");
	}
}


