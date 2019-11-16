// Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), 
// calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).

#include<stdio.h>
main()
{
	int tam_arquivo, velocidade;
	printf("Qual o tamanho do arquivo em (MB): ");
	scanf("%d",&tam_arquivo);
	printf("Qual a velocidade do Download em (Mbpks): ");
	scanf("%d",&velocidade);
	printf("\n%d Min",tam_arquivo / velocidade / 60);
	
}
