#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main()
{
	int ano, qtd_acertos, respostas, chances;
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	printf ("Digite o ano de seu nascimento: ");
	scanf ("%i", &ano);	
	if (ano > 2007)
	{
    	printf("\n\nSabia que hoje eh um dia de divers�o? Pois hoje o dia e todo seu! Feliz dia ds crian�as! Em comemorac�o a data dos dias das crian�as fizemos um quiz especialmente para voc�.\n\nResponda as 3 perguntas do jogo de perguntas e respostas e se voc� acertar pelo menos 2 quest�es descubrira a mensagem surpresa no final.\n\n                    Vamos jogar!\n");
    	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    	chances = 3;
    	if (chances >= 0)
    	{
			printf("\nA cor azul faz parte das cores da bandeira do Brasil? \nDigite:\n\n[1] para SIM\n[2] para N�O\nSua resposta: ");
    		scanf ("%i", &respostas); 
    		while (respostas < 1 || respostas > 2)
    		{
    			printf("===========================================================");
    			printf("|n\nVoc� digitou um valor invalido!!!");
    			printf("\n\nA cor azul faz parte das cores da bandeira do Brasil? \nDigite:\n\n[1] para SIM\n[2] para N�O\nSua resposta: ");
    			scanf("%d",&respostas);
			}
			if (respostas == 1)
			{
				printf("Parabens voc� acertou !!!!\n\n");
				qtd_acertos ++;
			} 
			else if (respostas == 2)
			{
				chances --;
				printf("Que pena voc� errou !!\n\nAinda possui: %d chances\n\n", chances);
			}
			else
			{
				chances --;
				printf("\nOpss!!! Algo de arrado aconteceu \n\nAinda possui: %d chances\n\n", chances);				
			}
			system("pause");
		}
		if (chances >=0)
		{
		
	 		printf("\n1 + 5 eh igual a 10? \nDigite:\n\n[1] para SIM\n[2] para N�O\nSua resposta: ");
	  		scanf ("%i", &respostas);
    		while (respostas < 1 || respostas > 2)
    		{
    			printf("===========================================================");
    			printf("|n\nVoc� digitou um valor invalido!!!");
	 			printf("\n1 + 5 eh igual a 10? \nDigite:\n\n[1] para SIM\n[2] para N�O\nSua resposta: ");
    			scanf("%d",&respostas);
    		}
			if (respostas == 2)
			{
				printf("Parabens voc� acertou !!!!\n");
				qtd_acertos ++;
			} 
			else if (respostas == 1)
			{
				chances --;
				printf("Que pena voce errou !!\n\nAinda possui: %d chances\n\n", chances);
			}
			else
			{
				chances --;
				printf("\nOpss!!! Algo de arrado aconteceu \n\nAinda possui: %d chances\n\n", chances);				
			}
			system("pause");
    	}
		if (chances >=0)
		{
		
			printf("\n A cor do sol eh verde? \nDigite:\n\n[1] para SIM\n[2] para N�O\nSua resposta: ");
			scanf ("%i", &respostas);
    		while (respostas < 1 || respostas > 2)
    		{
    			printf("===========================================================");
    			printf("|n\nVoc� digitou um valor invalido!!!");
				printf("\n A cor do sol eh verde? \nDigite:\n\n[1] para SIM\n[2] para N�O\nSua resposta: ");
    			scanf("%d",&respostas);
    		}
			if (respostas == 2)
			{
				printf("Parabens voc� acertou !!!!\n\n");
				qtd_acertos ++;
			} 
			else if (respostas == 1)
			{
				chances --;
				printf("Que pena voc� errou !!\n\nAinda possui: %d chances\n\n", chances);
			}
			else
			{
				chances --;
				printf("\nOpss!!! Algo de arrado aconteceu \n\nAinda possui: %d chances\n\n", chances);				
			}
			system("pause");
    	}
    	if(qtd_acertos >= 2)
	   {
	      printf("\n\nParabens! Voc� acertou %d quest�es! \nE por isso vai conseguir ler a mensagem surpresa!", qtd_acertos);
	      printf("\nFeliz das crian�as! Aproveite cada minuto dessa etapa da vida!\n Brinque bastante! Aproveite seu dia!");
	   }
	   else
	   {
	      printf("\n\nVoc� acertou apenas %d quest�es. Abaixo de 2. Para ver a mensagem especial tente novamente!", qtd_acertos);
		}    
	}
	else
	{
	printf("\n\nQue nessa data possamos recordar da crian�a que deve haver sempre dentro de nos.\nFeliz dia para nos que nao somos mais crian�as em idade, mas que devemos sempre permanecer em espirito!\nTenha um excelente dia!\n");
    }
}


