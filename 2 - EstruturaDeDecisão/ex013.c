// Faça um Programa que leia um número e exiba o dia correspondente da semana. 
// (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.

#include<stdio.h>
main()
{
	int dia;
	printf("\nEscolha o dia da semana de acordo com os numeros.\n===============\n[1] = Domingo\n[2] = Segunda\n[3] = Terca\n[4] = Quarta\n[5] = Quinta\n[6] = Sexta\n[7] = Sabado\n===============\nSua escolha: ");
	scanf("%d",&dia);
	if (dia == 1)
	{
		printf("\nO dia selecioando foi: Domingo");
	}
	else if (dia == 2)
	{
		printf("\nO dia selecioando foi: Segunda");
	}
	else if (dia == 3)
	{
		printf("\nO dia selecioando foi: Terca");
	}
	else if (dia == 4)
	{
		printf("\nO dia selecioando foi: Quarta");
	}
	else if (dia == 5)
	{
		printf("\nO dia selecioando foi: Quinta");
	}
	else if (dia == 6)
	{
		printf("\nO dia selecioando foi: Sexta");
	}
	else if (dia == 7)
	{
		printf("\nO dia selecioando foi: Sabado");
	}
	else
	{
		printf("\nVoce escolheu um valor invalido.");
	}
}
