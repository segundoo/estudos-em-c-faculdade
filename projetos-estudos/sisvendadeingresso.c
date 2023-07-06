#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dadoscliente
{
   char nome [100];
   char cpf [11];
   int anonasc;
};

struct dadoscliente dados[999];
int i = 0, opcao;

void venderIngresso() {
    i = 0;
    do
    {   

        printf("Nome do cliente: ");
        fflush(stdin);
        gets(dados[i].nome);
        printf("CPF do cliente: ");
        fflush(stdin);
        gets(dados[i].cpf);
        printf("Ano de nascimento do cliente: ");
        fflush(stdin);
        scanf("%d", &dados[i].anonasc);

        printf("Deseja continuar cadastrando?\n");
        printf("[1]SIM [2] Menu principal\n");
        fflush(stdin);
        scanf("%d", &opcao);
        if (opcao == 2)
        {
            main();
        } else {
            venderIngresso();
        }
        i++;
        
    } while (i <= 999 );
    
}

void listarIngresso() {
    printf("---------------------------------------\n");
    printf("-----LISTAGEM DE INGRESSOS VENDIDOS----\n");
    printf("---------------------------------------\n");
    printf("");
    printf("");
    printf("");
    printf("");
    i = 0;
    do {
        printf("---------------------------------------\n");
        printf("              INGRESSO %d              \n", i + 1);
        printf("---------------------------------------\n");
        printf("Nome: %s\n", dados[i].nome);
        printf("CPF: %s\n", dados[i].cpf);
        printf("Ano de nascimento: %d\n", dados[i].anonasc);
        printf("---------------------------------------\n");
        printf("                                       \n");
        printf("---------------------------------------\n");
        
        printf("Deseja ver a lista de ingressos vendidos novamente?\n");
        printf("[1]SIM [2] Menu principal\n");
        fflush(stdin);
        scanf("%d", &opcao);
        if (opcao == 2)
        {
            main();
        } else {
            listarIngresso();
        }
        i++;
        
    } while (i > 999);
    
}

int main() {
    setlocale( LC_ALL, "");
    
    int menu; //variavel de seleção de opção no menu

    //menu
    printf("Escolha uma opção\n");
    printf("1. Vender ingresso\n");
    printf("2. Listar ingressos vendidos\n");
    printf("3. Validar ingressos\n");
    printf("0. Sair\n");
    fflush(stdin);
    scanf("%d", &menu);
    
    switch (menu)
    {
    case 1:
        system("cls");
        venderIngresso();
        
        break;
    case 2:
        system("cls");
        listarIngresso();
        break;
    case 3:
        system("cls");
        printf("ok");
        break;
    case 4:
        system("cls");
        printf("ok");
        break;
    case 0:
        printf("Saindo...");
        exit(0);
        break;

    default:
        printf("[ERRO] Opção invalida!");
        break;
    }
    
    return 0;
}
