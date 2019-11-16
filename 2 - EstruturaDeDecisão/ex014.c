// Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, 
// e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
//   Média de Aproveitamento  Conceito
//   Entre 9.0 e 10.0        A
//   Entre 7.5 e 9.0         B
//   Entre 6.0 e 7.5         C
//   Entre 4.0 e 6.0         D
//   Entre 4.0 e zero        E
// O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem 
// “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.

#include<stdio.h>

main()
{
	float x, y, md;
	printf("\nDigite duas notas com espaco entre elas: ");
	scanf("%f%f",&x, &y);
	md = (x + y) / 2;
	if ((md >= 0) && (md < 4.0))
	{
		printf("\nNotas: %.2f | %.2f\nSituacao:  REPROVADO\nLetra:  E",x, y);
	}
	else if ((md >= 4.0) && (md < 6.0))
	{
		printf("\nNotas: %.2f | %.2f\nSituacao:  REPROVADO\nLetra:  D",x, y);
	}
	else if ((md >= 6.0) && (md < 7.5))
	{
		printf("\nNotas: %.2f | %.2f\nSituacao:  APROVADO\nLetra:  C",x, y);
	}
	else if ((md >= 7.5) && (md < 9.0))
	{
		printf("\nNotas: %.2f | %.2f\nSituacao:  APROVADO\nLetra:  C",x, y);
	}
	else if ((md >= 9.0) && (md < 10.0))
	{
		printf("\nNotas: %.2f | %.2f\nSituacao:  APROVADO\nLetra:  C",x, y);
	}
	printf("\nMedia: %.2f\n",md);
}

