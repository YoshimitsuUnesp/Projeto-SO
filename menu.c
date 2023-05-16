#include <stdio.h>
#include <stdlib.h>
#include "proccess.h"

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
            printf("\nOPCAO 1 ESCOLHIDA.\n\n");
            iniciaProcesso();
            break;
        case 2:
            printf("\nOPCAO 2 ESCOLHIDA.\n\n");
            processosEmExecucao();
            break;
        case 3:
            printf("\nOPCAO 1 ESCOLHIDA.\n\n");
            ocupacaoDeMemoria();
            break;
        default:
            printf("\nERRO: OPCAO INVALIDA!\n\n");
            break;
        }
    } while (opcao != 0);
}