// Fa�a um Programa que pergunte em que turno voc� estuda. Pe�a para digitar M-matutino ou V-Vespertino ou N- Noturno.
// Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inv�lido!", conforme o caso.

#include<stdio.h>
#include<ctype.h>

main()
{
	char turno;
	printf("    Turnos\n[M] Matutino\n[V] Vespertino\n[N] Noturno\n\nEscolha um turno: ");
	scanf("%c",&turno);
	turno = toupper(turno);
	if (turno == 'M')
	{
		printf("\nBom Dia!");
	}
	else if (turno == 'V')
	{
		printf("\nVespertino");
	}
	else if (turno == 'N')
	{
		printf("\nNoturno");
	}
	else
	{
		printf("\nOpcao invalida !!!");
	}
}

