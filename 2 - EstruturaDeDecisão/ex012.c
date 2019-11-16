// Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que 
// depende do salário bruto (conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado 
// (é a empresa que deposita). O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a 
// quantidade de horas trabalhadas no mês.
// Desconto do IR:
// Salário Bruto até 900 (inclusive) - isento
// Salário Bruto até 1500 (inclusive) - desconto de 5%
// Salário Bruto até 2500 (inclusive) - desconto de 10%
// Salário Bruto acima de 2500 - desconto de 20% Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a 
// quantidade de hora é 220.
//         Salário Bruto: (5 * 220)        : R$ 1100,00
//         (-) IR (5%)                     : R$   55,00  
//         (-) INSS ( 10%)                 : R$  110,00
//         FGTS (11%)                      : R$  121,00
//         Total de descontos              : R$  165,00
//         Salário Liquido                 : R$  935,00


#include<stdio.h>
main()
{
	float ganho_hora=0, hora_mes=0, sala_bruto=0, sala_liquido=0, IR=0, INSS=0, total=0, x=0;
	printf("\nQuanto voce ganha por hora: ");
	scanf("%f",&ganho_hora);
	printf("\nQuantas horas voce trabalha por mes: ");
	scanf("%f",&hora_mes);
	sala_bruto = ganho_hora * hora_mes;
	INSS = sala_bruto * 10 / 100;
	if (sala_bruto <= 900)
	{
		x = 0;
		IR = sala_bruto * x / 100;
	}
	else if (sala_bruto <= 1500)
	{
		x = 5;
		IR = sala_bruto * x / 100;
	}
	else if (sala_bruto <= 2500)
	{
		x = 10;
		IR = sala_bruto * x / 100;
	}
	else if (sala_bruto > 2500)
	{
		x = 20;
		IR = sala_bruto * x / 100;
	}
	total = IR + INSS;
	sala_liquido = sala_bruto - total;
	printf("\n\nSalario Bruto: (%.0f * %.0f)        : R$ %.2f", ganho_hora, hora_mes, sala_bruto);
	printf("\n(-) IR (%.0f%)                      : R$   %.2f", x, IR);
	printf("\n(-) INSS (10%)                   : R$  %.2f", INSS);
	printf("\nFGTS  (11%)                      : R$  %.2f",sala_bruto * 11 / 100);
	printf("\nTotal de desconto               : R$  %.2f",total);
	printf("\nSalario liquido                 : R$  %.2f",sala_liquido);
}
