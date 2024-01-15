#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "ticket.h"
#include "exposicao.h"
int main()
{
    setlocale(LC_ALL, "");
    float valor = 25.00, cedula = 0, troco = 0, valor_total = 0;
    int quantidade, idade = 0, forma_pagamento, disponivel = 45 , i = 0, parcela , num , escolha, informacao , satisf , continuar = 1;
    char esc [4][5], nome [4][30] , obra [60];

    while (continuar) {

    printf("Quantidade de ingressos disponíveis: %d" , disponivel);
    printf("\nBem vindo ao Museu Multitemático!");

    quantidade = 0;

    while (quantidade > disponivel || quantidade <= 0 ) {
        printf("\nQuantos ingressos deseja comprar?");
        if (scanf("%d" , &quantidade) != 1){
            printf("Caracteres especiais não sao aceitos\n");
            while (getchar() != '\n');
            exit(0);
        } else  {
            baixa(disponivel, quantidade);
        }
    }

    valor_total += vendas(quantidade,idade,valor,valor_total);

    if (valor_total > 0.00 ) {
         do {
    printf("Escolha a forma de pagamento: \n[1]-Dinheiro\n[2]-Debito\n[3]-Credito\n[0]-Cancelar");
    if (scanf("%d" , &forma_pagamento) != 1){
        printf("Caracteres especiais não sao aceitos\n");
        while (getchar() != '\n');
        exit(0);
    }
    system("cls");

    switch(forma_pagamento) {
    case 0:
        printf("Obrigado pela visita!");
        exit(0);
        break;
    case 1:
        dinheiro(cedula , troco,  valor_total);
        break;
    case 2:
        debito (valor_total, i);
        break;
    case 3:
        credito (valor_total , i  , parcela, quantidade);
        break;
    default:
        printf("Opção invalida\n");
        break;
    }
    } while (forma_pagamento != 1 && forma_pagamento != 2 && forma_pagamento != 3 && forma_pagamento != 0);

    }


    bem_vindo();
    printseparator();

    do {
        printf("Escolha uma das obras de acordo com seus respectivos números:\n1 - 100 Anos de arte moderna\n2 - 150 Anos de Santos Dumont\n3 - Jogos Olímpicos de Paris 2024\n4 - Porto de Santos\n0 - Para sair\n\n");

    if (scanf("%d" , &escolha) != 1){
        printf("Caracteres especiais não sao aceitos\n");
        while (getchar() != '\n');
        exit(0);
    }
    system("cls");

    switch(escolha) {
    case 0:
        printf("Obrigado pela visita!");
        exit(0);
        break;
    case 1:
        art(informacao);
        strcpy (obra, "100 Anos da Arte Moderna");
        question(satisf, esc, nome, quantidade, obra);
        break;
    case 2:
        santos_dumont(informacao);
        strcpy (obra, "150 Anos de Santos Dumont");
        question(satisf, esc, nome, quantidade, obra);
        break;
    case 3:
        olympcs();
        strcpy (obra, "Jogos olímpicos de Paris 2024");
        question(satisf, esc, nome, quantidade, obra);
        break;
    case 4:
        porto(informacao);
        strcpy (obra, "Porto de Santos");
        question(satisf, esc, nome, quantidade, obra);
        break;
    default:
        printf("Insira um número valido");
        break;
    }
    }while (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 4 && escolha != 0);

    estatistica (esc, quantidade , obra);

   do {
    printf("Deseja comprar outro ingresso? 1-Sim/0-Não: ");
    if (scanf("%d", &continuar) != 1 || (continuar !=0 && continuar != 1)) {
        printf("Entrada inválida. Por favor, insira um valor numérico.\n");
        while (getchar() != '\n');
        continuar -1;
    }
} while (continuar != 1 && continuar != 0);


    if (continuar) {
        system("cls");
        valor_total = 0;
        troco = 0;
        disponivel -= quantidade;
    } else {
        printf("Obrigado pela visita!\n");
        exit(0);
    }
}
return 0;
}
