// Fa�a um programa que calcule as ra�zes de uma equa��o do segundo grau, na forma ax2 + bx + c. 
// O programa dever� pedir os valores de a, b e c e fazer as consist�ncias, informando ao usu�rio nas seguintes situa��es:
// Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo grau e o programa n�o deve fazer pedir os demais valores, sendo encerrado;
// Se o delta calculado for negativo, a equa��o n�o possui raizes reais. Informe ao usu�rio e encerre o programa;
// Se o delta calculado for igual a zero a equa��o possui apenas uma raiz real; informe-a ao usu�rio;
// Se o delta for positivo, a equa��o possui duas raiz reais; informe-as ao usu�rio;


#include<stdio.h>
#include<math.h>

main()
{
	int a, b, c, delta, raiz1, raiz2;
	printf("\nDigite os termos da equacao a, b, c da equacao ax^2 + bx + c");
	printf("\n\nDigite o termo a --> ");
	scanf("%d",&a);
	if (a == 0)
	{
		printf("\nNao eh uma equacao de segundo grau");
	}
	else
	{
		printf("Digite o termo b --> ");
		scanf("%d",&b);
		printf("Digite o termo c --> ");
		scanf("%d",&c);
		delta = (b*b - (4*a*c));
		if (delta < 0)
		{
			printf("Delta: %d\nA equacao nao possui raizes reais.",delta);
		}
		else if (delta == 0)
		{
			printf("\nDelta: %d\nA equacao possui uma raiz",delta);
			delta = sqrt(delta);
			raiz1 = (((-1) * b + delta) / (2 * a));
			printf("\nRaiz da equacao: %d",raiz1);
		}
		else
		{
			printf("\nDelta: %d\nA equacao possui duas raizes",delta);
			delta = sqrt(delta);
			raiz1 = (((-1) * b + delta) / (2 * a));
			raiz2 = (((-1) * b + delta) / (2 * a));
			printf("\nRaiz da equacao: %d",raiz1);
			printf("\nRaiz da equacao: %d",raiz2);	
		}
	}
}

