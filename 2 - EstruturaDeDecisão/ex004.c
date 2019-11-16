// Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

#include<stdio.h>
#include<ctype.h>

main()
{
	char letra;
	printf("\nDigite uma letra: ");
	scanf("%c",&letra);
	letra = toupper(letra);
	if ((letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U'))
	{
		printf("\nA letra %c e uma vogal",letra);
	}
	else
	{
		printf("\nA letra %c e uma consoante",letra);
	}
}


