// Fa�a um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a m�dia alcan�ada por aluno e apresentar:
// A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete;
// A mensagem "Reprovado", se a m�dia for menor do que sete;
// A mensagem "Aprovado com Distin��o", se a m�dia for igual a dez.

#include<stdio.h>
main()
{
	float n1, n2, media;
	printf("Digite suas duas notas: ");
	scanf("%f%f",&n1, &n2);
	media = (n1 + n2) / 2;
	if (media == 10)
	{
		printf("\nAprovado com Distincao");
	}
	else if (media >= 7)
	{
		printf("\nAprovado");
	}
	else
	{
		printf("\nReprovado");
	}
}

