//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    //vari�veis
    char opcao;
    int qtdRuim, qtdRegular, qtdBom, qtdOtimo;
    qtdRuim = 0;
    qtdRegular = 0;
    qtdBom = 0;
    qtdOtimo = 0;

    do 
    {   //menu de op��es
        printf ("------------------------------------------------\n");
        printf ("Avalie o nosso atendimento. Digite uma op��o: \n");
        printf("________________________________________________\n\n");
        printf ("1 - RUIM\n");
        printf ("2 - REGULAR\n");
        printf ("3 - BOM\n");
        printf ("4 - �TIMO\n");
        printf ("5 - SAIR\n\n");
        printf("------------------------------------------------\n\n");
        scanf ("%c", &opcao);

        switch (opcao)
        {
        case '1': 
            qtdRuim++;
            break;
        case '2': 
            qtdRegular++;
            break;
        case '3': 
            qtdBom++;
            break;
        case '4': 
            qtdOtimo++;
            break;
        case '5':
        printf("Saindo.....\n");
            break;
        default: 
            printf ("Op��o invalida!");
            break;
        }
        printf("\n");

    } while (opcao != '5');

    printf ("Quantidade de votos no ruim: %i\n", qtdRuim);
    printf ("Quantidade de votos no regular: %i\n", qtdRuim);
    printf ("Quantidade de votos no bom: %i\n", qtdRuim);
    printf ("Quantidade de votos no �timo: %i\n", qtdRuim);
    return 0;
}
