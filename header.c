#include <stdio.h>
#include <stdlib.h>

void limparTela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void menuPrincipal()
{
    int opcao;

    do
    {
        printf("----------------------------------------\n"
               "|        INTERFACE DE CONTROLE         |\n"
               "----------------------------------------\n"
               "| 1 - Iniciar novo processo            |\n"
               "| 2 - Visualizar processos em execucao |\n"
               "| 3 - Visualizar ocupacao da memoria   |\n"
               "| 0 - Encerrar programa                |\n"
               "----------------------------------------\n");
        printf("\nEscolha uma opcao: \n");
        scanf("%d", &opcao);

        limparTela();
        switch (opcao)
        {
        case 0:
            printf("\nOPCAO 0 ESCOLHIDA.\nENCERRANDO PROGRAMA...\n\n");
            exit(0);
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            printf("\nERRO: OPCAO INVALIDA!\n\n");
            break;
        }
    } while (opcao != 0);
}