// Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s. 
// Calcule e mostre o total do seu sal�rio no referido m�s, sabendo-se que s�o descontados 11% para o 
// Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�:
// sal�rio bruto.
// quanto pagou ao INSS.
// quanto pagou ao sindicato.
// o sal�rio l�quido.
// calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
// + Sal�rio Bruto : R$
// - IR (11%) : R$
// - INSS (8%) : R$
// - Sindicato ( 5%) : R$
// = Sal�rio Liquido : R$
// Obs.: Sal�rio Bruto - Descontos = Sal�rio L�quido.


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


