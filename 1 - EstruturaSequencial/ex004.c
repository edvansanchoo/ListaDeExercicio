// Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.

# include<stdio.h>
main()
{
	int n1, n2, n3, n4;
	printf("Digite suas 4 notas bimestrais com espacos entre elas: ");
	scanf("%d%d%d%d",&n1, &n2, &n3, &n4);
	printf("A media e: %d", (n1+n2+n3+n4)/4);
}

