// Fa�a um Programa que verifique se uma letra digitada � "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inv�lido.


#include<stdio.h>

main()
{
	char x[3];
	printf("[M] Masculino\n[F] Femenino\nQual o seu sexo: ");
	scanf("%s",&x);
	if ((x == "M") || (x == "m"))
	{
		printf("\nMasculino");
	}
	else if ((x == "F") || (x == "f"))
	{
		printf("\nFemenino");
	}
	else
	{
		printf("\nSexo Invalido");
	}
}

