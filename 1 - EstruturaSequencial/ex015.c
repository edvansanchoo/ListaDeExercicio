// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
// Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o 
// Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
// salário bruto.
// quanto pagou ao INSS.
// quanto pagou ao sindicato.
// o salário líquido.
// calcule os descontos e o salário líquido, conforme a tabela abaixo:
// + Salário Bruto : R$
// - IR (11%) : R$
// - INSS (8%) : R$
// - Sindicato ( 5%) : R$
// = Salário Liquido : R$
// Obs.: Salário Bruto - Descontos = Salário Líquido.


#include<stdio.h>

main()
{
	float ganha_hora, hora_mes, sal_bruto, IR, INSS, sindicato, sal_liquido;
	printf("\nQuanto voce ganha por hora: ");
	scanf("%f",&ganha_hora);
	printf("\nQuantas horas voce trabalha por mes: ");
	scanf("%f",&hora_mes);
	sal_bruto = ganha_hora * hora_mes;
	IR = sal_bruto * 11 / 100;
	INSS = sal_bruto * 8 / 100;
	sindicato = sal_bruto * 8 / 100;
	sal_liquido = sal_bruto - (IR + INSS + sindicato);
	
	printf("\n+ Salario Bruto : R$ %.2f",sal_bruto);
	printf("\n- IR (11%) : R$ %.2f", IR);
	printf("\n- INSS (8%) : R$ %.2f", INSS);
	printf("\n- Sindicato (5%) : R$ %.2f", sindicato);
	printf("\n= Salario Liquido : R$ %.2f", sal_liquido);
}


