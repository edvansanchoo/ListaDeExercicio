#include <stdio.h>
#include <stdlib.h>

main ()
{
	int i=0, i1=0, i2=0, i3=0, i4=0, ano, x;
	
	printf ("Digite o ano de seu nascimento: ");
	scanf ("%i", &ano);
	if (ano>=2007)
	{
    	printf("\n\n Sabia que hoje eh um dia de diversao? Pois hoje o dia e todo seu! Feliz dia ds criancas! Em comemoracao a data dos dias das criancas fizemos um quiz especialmente para voce.\n\nResponda as 4 perguntas jogo de perguntas e respostas e se voce acertar pelo menos 3 questoes descubrira a mensagem surpresa no final.\n\n                    Vamos jogar!\n");
    	printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
		printf("\nA cor azul faz parte das cores da bandeira do Brasil? \nDigite:\n\n[1] para SIM\n[2] para NAO\nSua resposta: ");
    	scanf ("%i", &x);
    	while (x>2)
        {
      		printf ("Valor invalido! Digite um valor valido para a resposta. 1 para SIM e 2 para NAO.");
      		scanf ("%i", &x);
      		continue;
        }
		switch (x)
        {
          	case (1):
		  		printf("Resposta certa!");
          		i1++;
          	case (2):
				printf("Reposta errada!");
          		i1--;
          		break;
        }
	 	printf("\n 1+5 eh igual a 10? \nDigite 1 para SIM e 2 para NAO.");
	  	scanf ("%i", &x);
     	while (x>2)
    	{
      		printf ("Valor invalido! Digite um valor valido para a resposta. 1 para SIM e 2 para NAO.");
      		scanf ("%i", &x);
      		continue;
        }
        switch(x)
        {
		  	case (1):
		  		printf("Resposta errada!");
          		i2--;
          		break;
			case (2):
				printf("Reposta certa!");
          		i2++;
				break;
    	}
		printf("\n A cor do sol eh verde? \nDigite 1 para SIM e 2 para NAO.");
		scanf ("%i", &x);
        while (x>2)
        {
      		printf ("Valor invalido! Digite um valor valido para a resposta. 1 para SIM e 2 para NAO.");
      		scanf ("%i", &x);
      		continue;
        }
        switch(x)
        {
		  	case (1):
		  		printf("Resposta errada!");
          		i3--;
          		break;
		 	case (2):
				printf("Reposta certa!");
          		i3++;
				break;
        }
		printf("\n Baymax eh um roubo agente de saude? \nDigite 1 para SIM e 2 para NAO.");
	  	scanf ("%i", &x);
      	while (x>2)
          {
      		printf ("Valor invalido! Digite um valor valido para a resposta. 1 para SIM e 2 para NAO.");
      		scanf ("%i", &x);
      		continue;
        }
        switch(x)
        {
          	case (1):
		  		printf("Resposta certa!");
          		i4++;
          		break;
		  	case (2):
				printf("Reposta errada!");
          		i4--;
				break;
	   }
	   i=(i1)+(i2)+(i3)+(i4);
	   if(i>=3)
	   {
	      printf("Parabens! Voce acertou %i questoes! E por isso vai conseguir ler a mensagem surpresa!", &i);
	      printf("Feliz das criancas! Aproveite cada minuto dessa etapa da vida! Brinque bastante! Aproveite seu dia!");
	   }
	   else
	   {
	      printf("Voce acertou apenas %i questoes. Abaixo de 3. Para ver a mensagem especial tente novamente!", &i);
		}    
    }
	else
	{
	printf("Que nessa data possamos recordar da crianca que deve haver sempre dentro de nos. Feliz dia para nos que nao somos mais criancas em idade, mas que devemos sempre permanecer em espirito! Tenha um excelente dia!");
    }
}
