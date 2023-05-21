//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    //variáveis
    int qtdRuim, qtdRegular, qtdBom, qtdOtimo, opcao;
    qtdRuim = 0;
    qtdRegular = 0;
    qtdBom = 0;
    qtdOtimo = 0;

    do 
    {   //menu de opções
        printf ("Avalie o nosso atendimento. Digite uma opção: \n");
        printf ("1 - RUIM\n");
        printf ("2 - REGULAR\n");
        printf ("3 - BOM\n");
        printf ("4 - ÓTIMO\n");
        printf ("5 - SAIR\n");
        scanf ("%d", &opcao);

        switch (opcao)
        {
        case 1: 
            qtdRuim = qtdRuim + 1;
            break;
        case 2: 
            qtdRegular = qtdRegular + 1;
            break;
        case 3: 
            qtdBom = qtdBom + 1;
            break;
        case 4: 
            qtdOtimo = qtdOtimo + 1;
            break;
        case 5:
            break;
        default: 
            printf ("Opção invalida");
            break;
        }

    } while (opcao < 5);

    printf ("Quantidade de votos no ruim: %i\n", qtdRuim);
    printf ("Quantidade de votos no regular: %i\n", qtdRuim);
    printf ("Quantidade de votos no bom: %i\n", qtdRuim);
    printf ("Quantidade de votos no ótimo: %i\n", qtdRuim);
    return 0;
}
