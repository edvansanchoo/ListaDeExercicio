// As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe contraram para desenvolver o programa que calcular� os reajustes.
// Fa�a um programa que recebe o sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
// sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
// sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
// sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
// sal�rios de R$ 1500,00 em diante : aumento de 5% Ap�s o aumento ser realizado, informe na tela:
// o sal�rio antes do reajuste;
// o percentual de aumento aplicado;
// o valor do aumento;
// o novo sal�rio, ap�s o aumento.



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

