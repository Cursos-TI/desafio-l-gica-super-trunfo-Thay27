#include <stdio.h>

    struct Carta {
        char Estado[50];
        char Codigo[4];
        char Cidade[50];
        unsigned long int Populacao;
        float Area;
        float PIB;
        //pontos turísticos
        int PT;
        //densidade populacional
        float DP;
        //PIB per capita
        float PPC; 
        float SP; 

 };
    int main() {
        struct Carta carta1, carta2;

        printf ("Cadastro da Carta 1 \n");

            printf ("Digite o estado: \n");
            fgets (carta1.Estado, 50, stdin);

            printf ("Digite o Código da Carta: \n");
            scanf ("%s", carta1.Codigo);

            printf ("Digite a cidade: \n" );
            scanf ("%s", carta1.Cidade);

            printf("Digite a quantidade de pontos turísticos:\n");
            scanf(" %d", &carta1.PT);

            printf ("Digite a população: \n");
            scanf (" %lu", &carta1.Populacao);

            printf ("Digite a area (em KM²): \n ");
            scanf (" %f", &carta1.Area);

            printf("Digite o PIB:\n");
            scanf(" %f", &carta1.PIB);
            while (getchar() != '\n');
                  
            carta1.DP = carta1.Populacao / carta1.Area;
            carta1.PPC = carta1.PIB / carta1.Populacao;

            carta1.SP = (unsigned long int)carta1.Populacao + carta1.Area + (float)carta1.PT + (float)carta1.PIB + (float)carta1.PPC + (1 / carta1.DP);


            printf ("Carta 1 Cadastrada com sucesso!\n\n");
            

        printf ("Cadastro da Carta 2 \n");

            printf ("Digite o estado: \n");
            fgets (carta2.Estado, 50, stdin);

            printf ("Digite o Código da Carta: \n");
            scanf ("%s", carta2.Codigo);

            printf ("Digite a cidade: \n" );
            scanf ("%s", carta2.Cidade);

            printf ("Digite a quantidade de pontos turisticos: \n");
            scanf ("%d", &carta2.PT);

            printf ("Digite a população: \n");
            scanf ("%lu", &carta2.Populacao);

            //float só aceita .
            printf ("Digite a area (em KM²): \n ");
            scanf (" %f", &carta2.Area);

            printf ("Digite o PIB: \n");
            scanf  (" %f", &carta2.PIB);

            carta2.DP = carta2.Populacao / carta2.Area;
            carta2.PPC = carta2.PIB / carta2.Populacao;

            carta2.SP = (unsigned long int)carta2.Populacao + carta2.Area + (float)carta2.PT + (float)carta2.PIB + (float)carta2.PPC + (1 / carta2.DP);


            printf ("Carta 2 Cadastrada com sucesso!\n\n");
    
        

    printf ("\n Carta 1 \n");

        printf ("Estado: %s\n", carta1.Estado);
        printf ("Código da carta: %s\n", carta1.Codigo);
        printf ("Cidade: %s\n", carta1.Cidade);
        printf ("População: %lu\n", carta1.Populacao);
        printf ("Area: %f\n", carta1.Area);
        printf ("PIB: %f\n", carta1.PIB);
        printf ("Pontos Turisticos: %d\n", carta1.PT);
        printf ("Densidade Populacional: %f\n", carta1.DP);
        printf ("PIB per Capita: %f\n", carta1.PPC);

    printf ("\n Carta 2 \n");

        printf ("Estado: %s\n", carta2.Estado);
        printf ("Código da carta: %s\n", carta2.Codigo);
        printf ("Cidade: %s\n", carta2.Cidade);
        printf ("População: %lu\n", carta2.Populacao);
        printf ("Area: %f\n", carta2.Area);
        printf ("PIB: %f\n", carta2.PIB);
        printf ("Pontos Turisticos: %d\n", carta2.PT);
        printf ("Densidade Populacional: %f\n", carta2.DP);
        printf ("PIB per Capita: %f\n", carta2.PPC);


    printf ("\n Qual carta vence em População? \n");

        if (carta1.Populacao > carta2.Populacao){
            printf ("\n Carta 1 Vence! \n");
        }else{
            printf ("\n Carta 2 Vence! \n");
        }


    return 0;


    }