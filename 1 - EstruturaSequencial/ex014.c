// João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
// Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos)
// deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a variável peso (peso de peixes)
// e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá pagar.
// Imprima os dados do programa com as mensagens adequadas.


#include<stdio.h>

main()
{
	float peso, excesso, multa;
	excesso = 0;
	multa = 0;
	printf("Digite a quantidade de peixes em quilos: ");
	scanf("%f",&peso);
	if (peso > 50)
	{
		excesso = peso - 50;
		multa = excesso * 4;
	}
	else
	{
		printf("Tudo certo!!!");
	}
	printf("\nDeu %.2f quilos.",peso);
	printf("\nTeve um excesso de: %.2f quilos",excesso);
	printf("\nTota da multa: %.2f",multa);
}

