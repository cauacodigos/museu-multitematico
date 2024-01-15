#include <stdio.h>
#include <windows.h>
float baixa(int disponivel, int quantidade) {

        if(quantidade <= 0){
        printf("Coloque um número valido!\n");

    } else if (quantidade > disponivel) {
        printf("Compra de ingressos excedidos!\n");

    } else {
        disponivel = disponivel - quantidade;
        printf("Quantidade de ingressos disponiveis: %d\n" , disponivel);
    }

}

float vendas (int quantidade ,int idade, float ingresso , float valor_total) {
    float meia_entrada = 0;

        for (int i = 0; i < quantidade; i++) {
        printf("Qual a idade do(s) %d visitante(s)\n" , i+1);
        if (scanf("%d" , &idade)!=1) {
        printf("Entrada invalida. Por favor, insira um valor númerico.\n");
        while (getchar() != '\n');
        i--;
        continue;
        }

        if (idade < 18) {
        meia_entrada = ingresso/2;
        valor_total = meia_entrada + valor_total;
        }else if (idade >= 60) {
            valor_total+= 0.00;
        } else  {
            valor_total = ingresso + valor_total;
    }
    printf ("O valor total ficou: %.2f\n" , valor_total);
    }
    return valor_total;
}

float dinheiro(float cedula , float troco, float valor_total) {
    float falta = 0;
    do  {
        printf("Valor total: R$: %.2f\n" , valor_total);
        printf("Insira a quantidade de dinheiro: R$");
        if (scanf("%f", &cedula) != 1) {
        printf("Entrada inválida. Por favor, insira um valor numérico.\n");
        while (getchar() != '\n');//funcao para verificar se é numero ou letra
        continue;
        }
       if (valor_total > cedula) {
        falta = valor_total - cedula;
        printf("Dinheiro insuficiente, falta: %.2f\n" , falta);

       }else if (cedula > valor_total) {
            troco = cedula - valor_total;
            printf("Seu troco será de: %.2f\n" , troco);
            printf("Obrigado pela compra!\n");
       } else {
        printf("Obrigado pela compra!\n");
    }
    } while (cedula < valor_total);
}

float debito (float valor_total, int i) {
    char senha [20];
    printf("Valor total: R$: %.2f\n" , valor_total);
    printf("Metódo selecionado: Débito\n");
    printf("Insira o cartão\n");
    printf("Carregando");

    for(int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
     printf("\nDigite sua senha:");

    while (1) {
        char ch = getch();
        if (ch == '\r' || ch == '\n') {
            break;
        } else if (ch == '\b' && i > 0) {
            i--;
            senha[i] = '\0';
            printf("\b \b");
        } else if (i < sizeof(senha) - 1) {
            senha[i] = ch;
            i++;
            printf("*");
        }
    }
    senha[i] = '\0';
    printf("\nPagamento Concluído!\n");
    printf("Obrigado pela compra!\n");
}

float credito(float valor_total, int i, int parcela, int quantidade ) {
    int decisao;
    char senha [20];
    printf("Valor total: R$: %.2f\n" , valor_total);
    printf("Metódo selecionado: Crédito\n");
    printf("Insira o cartão\n");
    printf("Carregando");

    for(int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");

      if (quantidade >= 5) {
        while (1) {
            printf("Deseja parcelar? (1-Sim/2-Não): ");
            if (scanf("%d", &decisao) == 1) {
                if (decisao == 1) {
                    printf("Quantas vezes deseja parcelar? ");
                    scanf("%d", &parcela);
                    float valor_parcela = valor_total / parcela;
                    printf("O valor das parcelas será de: R$%.2f por mês\n", valor_parcela);
                    break;
                } else if (decisao == 2) {
                    break;
                } else {
                    printf("Opção inválida. Por favor, escolha 1 para Sim ou 2 para Não.\n");
                }
            } else {
                printf("Entrada inválida. Por favor, insira 1 para Sim ou 2 para Não.\n");
                while (getchar() != '\n');
            }
        }
    }

    printf("Digite sua senha: ");
    while (1) {
        char ch = getch();
        if (ch == '\r' || ch == '\n') {
            break;
        } else if (ch == '\b' && i > 0) {
            i--;
            senha[i] = '\0';
            printf("\b \b");
        } else if (i < sizeof(senha) - 1) {
            senha[i] = ch;
            i++;
            printf("*");
        }
    }
    senha[i] = '\0';
    printf("\nPagamento Concluído!\n");
    printf("Obrigado pela compra!\n");
}
void estatistica (char esc[4][5] , int quantidade, char obra[60]) {
    float countA = 0.0 ,  countB = 0.0 ,  countC = 0.0 , countD = 0.0;

    FILE *arquivo = fopen("estatistica.csv", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo");
        return;
        }

    for (int i = 0; i < quantidade; i++) {
        switch (esc[i][0]) {
        case 'A':
            countA++;
            break;
        case 'B':
            countB++;
            break;
        case 'C':
            countC++;
            break;
        case 'D':
            countD++;
            break;
        }
    }

    float total_resposta = countA + countB + countC + countD;

    float percentA = countA / total_resposta * 100.0;

    float percentB = countB / total_resposta * 100.0;

    float percentC = countC / total_resposta * 100.0;

    float percentD = countD / total_resposta * 100.0;

    printf("Estatistica dos  Graus de Satisfação:\n");

    printf("A (Muito Satisfeito): %.2f%%\n" ,  percentA );

    printf("B (Satisfeito): %.2f%%\n" , percentB);

    printf("C (Decepcionado): %.2f%%\n" , percentC);

    printf("D (Péssimo): %.2f%%\n" , percentD);

    fprintf(arquivo, "Estatistica dos Graus de Satisfação dos %d convidados\n" ,quantidade);
    fprintf(arquivo, "Obra: %s\n" , obra);

    fprintf(arquivo, "A (Muito Satisfeito): %.2f%%\n", percentA);
    fprintf(arquivo, "B (Satisfeito): %.2f%%\n", percentB);
    fprintf(arquivo, "C (Decepcionado): %.2f%%\n", percentC);
    fprintf(arquivo, "D (Péssimo): %.2f%%\n", percentD);

    fprintf(arquivo , "\n");

    fclose(arquivo);

}
