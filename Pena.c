#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* PROGRAMA PARA CALCULAR PROGRESSAO DE PENA */

int main()
{
	setlocale(LC_ALL,"Portuguese");
	//variáveis
	int var_ano,var_mes,var_dia,total_dias,incisos,inc_1,inc_2,inc_3,inc_4,inc_5,inc_6,inc_7,inc_8;

	//interface
	printf("\nDigite a quantidade de anos da pena: ");
		scanf("%d",&var_ano);
	printf("\nDigite a quantidade de meses da pena: ");
		scanf("%d",&var_mes);
	printf("\nDigite a quantidade de dias da pena: ");
		scanf("%d",&var_dia);

	//transformar anos, meses e dias em total de dias
	total_dias=var_ano*365+var_mes*30+var_dia;

	//Opções de acordo com o art. 112 da Lei de Execuções Penais
	printf("\nDigite uma das opções a seguir:");
	printf("\n1: se o apenado for primário e o crime tiver sido cometido sem violência à pessoa ou grave ameaça;");
	printf("\n\n2: se o apenado for reincidente em crime cometido sem violência à pessoa ou grave ameaça;");
	printf("\n\n3: se o apenado for primário e o crime tiver sido cometido com violência à pessoa ou grave ameaça;");
	printf("\n\n4: se o apenado for reincidente em crime cometido com violência à pessoa ou grave ameaça;");
	printf("\n\n5: se o apenado for condenado pela prática de crime hediondo ou equiparado, se for primário;");
	printf("\n\n6: se o apenado for: \na) condenado pela prática de crime hediondo ou equiparado, com resultado morte, se for primário, vedado o livramento condicional;");
	printf("\nb) condenado por exercer o comando, individual ou coletivo, de organização criminosa estruturada para a prática de crime hediondo ou equiparado;");
	printf("\nc) condenado pela prática do crime de constituição de milícia privada.");
	printf("\n\n7: se o apenado for reincidente na prática de crime hediondo ou equiparado;");
	printf("\n\n8: se o apenado for reincidente em crime hediondo ou equiparado com resultado morte, vedado o livramento condicional.");
	printf("\n");

	//calculos de acordo com cada inciso
		scanf("%d",&incisos);
			if(incisos==1){
			int prog_anos, prog_meses, prog_dias;
			inc_1=total_dias*16/100;
			prog_anos = inc_1/365;
			//este comando abaixo atualiza o valor de inc_1 para o resto da divisão por 365
			inc_1 %= 365;
			prog_meses = inc_1/30;
			prog_dias = inc_1 % 30;
			printf("A pena a ser cumprida até a próxima progressão é de: %d anos, %d meses e %d dias, o que corresponde a 16%% da pena.", prog_anos, prog_meses, prog_dias);
			printf("\n");
			}
			else if(incisos==2){
			int prog_anos, prog_meses, prog_dias;
			inc_2=total_dias*20/100;
			prog_anos = inc_2/365;
			inc_2 %= 365;
			prog_meses = inc_2/30;
			prog_dias = inc_2 % 30;
			printf("A pena a ser cumprida até a próxima progressão é de: %d anos, %d meses e %d dias, o que corresponde a 20%% da pena.", prog_anos, prog_meses, prog_dias);
			printf("\n");
			}
			else if(incisos==3){
			int prog_anos, prog_meses, prog_dias;
			inc_3=total_dias*25/100;
			prog_anos = inc_3/365;
			inc_3 %= 365;
			prog_meses = inc_3/30;
			prog_dias = inc_3 % 30;
			printf("A pena a ser cumprida até a próxima progressão é de: %d anos, %d meses e %d dias, o que corresponde a 25%% da pena.", prog_anos, prog_meses, prog_dias);
			printf("\n");
			}
			else if(incisos==4){
			int prog_anos, prog_meses, prog_dias;
			inc_4=total_dias*30/100;
			prog_anos = inc_4/365;
			inc_4 %= 365;
			prog_meses = inc_4/30;
			prog_dias = inc_4 % 30;
			printf("A pena a ser cumprida até a próxima progressão é de: %d anos, %d meses e %d dias, o que corresponde a 30%% da pena.", prog_anos, prog_meses, prog_dias);
			printf("\n");
			}
			else if(incisos==5){
			int prog_anos, prog_meses, prog_dias;
			inc_5=total_dias*40/100;
			prog_anos = inc_5/365;
			inc_5 %= 365;
			prog_meses = inc_5/30;
			prog_dias = inc_5 % 30;
			printf("A pena a ser cumprida até a próxima progressão é de: %d anos, %d meses e %d dias, o que corresponde a 40%% da pena.", prog_anos, prog_meses, prog_dias);
			printf("\n");
			}
			else if(incisos==6){
			int prog_anos, prog_meses, prog_dias;
			inc_6=total_dias*50/100;
			prog_anos = inc_6/365;
			inc_6 %= 365;
			prog_meses = inc_6/30;
			prog_dias = inc_6 % 30;
			printf("A pena a ser cumprida até a próxima progressão é de: %d anos, %d meses e %d dias, o que corresponde a 50%% da pena.", prog_anos, prog_meses, prog_dias);
			printf("\n");
			}
			else if(incisos==7){
			int prog_anos, prog_meses, prog_dias;
			inc_7=total_dias*60/100;
			prog_anos = inc_7/365;
			inc_7 %= 365;
			prog_meses = inc_7/30;
			prog_dias = inc_7 % 30;
			printf("A pena a ser cumprida até a próxima progressão é de: %d anos, %d meses e %d dias, o que corresponde a 60%% da pena.", prog_anos, prog_meses, prog_dias);
			printf("\n");
			}
			else if(incisos==8){
			int prog_anos, prog_meses, prog_dias;
			inc_8=total_dias*70/100;
			prog_anos = inc_8/365;
			inc_8 %= 365;
			prog_meses = inc_8/30;
			prog_dias = inc_8 % 30;
			printf("A pena a ser cumprida até a próxima progressão é de: %d anos, %d meses e %d dias, o que corresponde a 70%% da pena.", prog_anos, prog_meses, prog_dias);
			printf("\n");
			}
			else
            printf("\nVocê digitou uma opção inválida.\n");

	system("pause");


	return 0;
}
