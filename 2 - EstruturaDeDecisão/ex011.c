// As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram para desenvolver o programa que calculará os reajustes.
// Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
// salários até R$ 280,00 (incluindo) : aumento de 20%
// salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
// salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
// salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
// o salário antes do reajuste;
// o percentual de aumento aplicado;
// o valor do aumento;
// o novo salário, após o aumento.



#include<stdio.h>

main()
{
	float salario, aumento, percentual;
	printf("Qual o valor do salario: ");
	scanf("%f",&salario);
	if (salario <= 280)
	{
		aumento = salario * 20 / 100;
		percentual = 20;
	}
	else if ((salario > 280) && (salario < 700))
	{
		aumento = salario * 15 / 100;
		percentual = 15;
	}
	else if ((salario >= 700) && (salario < 1500))
	{
		aumento = salario * 10 / 100;
		percentual = 10;
	}
	else if (salario >= 1500)
	{
		aumento = salario * 5 / 100;
		percentual = 5;
	}
	printf("\nSalario: %.2f", salario);
	printf("\nPercentual de aumento: %.0f", percentual);
	printf("\nAumento: %.2f", aumento);
	printf("\nNovo salario: %.2f",salario + aumento);
}

