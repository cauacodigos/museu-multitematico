#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>
#include "ticket.h"

#define ANSI_COLOR_GREEN "\e[0;32m"

#define ANSI_COLOR_RESET   "\x1b[0m"

#define ANSI_COLOR_YELLOW "\e[0;33m"

#define ANSI_COLOR_BLUE "\e[0;36m"

void bem_vindo ()  {
printf(ANSI_COLOR_GREEN"Bem vindo ao Museu Multitemático." ANSI_COLOR_RESET);
}
void printseparator() {
    printf(ANSI_COLOR_YELLOW "\n-----------------------------------------------------------\n" ANSI_COLOR_RESET);

}
void art(int informacao) {
    printf(ANSI_COLOR_GREEN"100 anos da Semana da Arte Moderna:\n " ANSI_COLOR_RESET);

    printseparator();

    printf("Foi a semana onde a elite artistica Brasileira do século XX, se reuniu na intenção de apresentar ideias e preceitos do modernismo. As obras expostas na Semana da Arte moderna rompiam padrões estéticos vigentes á época e buscavam inserir o vanguardismo no brasil e acabaram por chocar o público na sua época.");

    printseparator();

    printf(ANSI_COLOR_BLUE "Oswald de Andrade " ANSI_COLOR_RESET "desempenhou um papel essêncial na realização da Semana da Arte Moderna. Proveniente de uma família abastada e teve a oportunidade de viver na Europa, onde foi exposto às influências da arte moderna, que estava em alta na época. Ao voltar ao Brasil, Oswald sentiu a necessidade de incorporar essas influências europeias à cultura brasileira, abordando questões e temas nacionais. Ele se reuniu com um grupo de amigos para encontrar uma maneira de expressar essa nova estética, o que resultou na criação da Semana de Arte Moderna. Mais tarde, Oswald casou-se com a pintora " ANSI_COLOR_BLUE "Tarsila do Amaral" ANSI_COLOR_RESET "(1886-1973). Embora Tarsila não tenha participado da Semana de 22, sua contribuição foi imensa para o desenvolvimento do modernismo no Brasil. Juntos, eles deram origem ao Movimento Antropofágico, que tinha como objetivo principal valorizar a cultura brasileira e desempenhou um papel crucial na primeira fase do modernismo no país.");

        printseparator();

         printf("Na imagem da Semana de Arte Moderna, vemos um cenário revolucionário com destaque para três figuras proeminentes: Manuel Bandeira, Mario de Andrade e Oswald de Andrade. Eles estão presentes na foto que captura o momento histórico em que artistas desafiaram as convenções, celebrando a criatividade moderna que moldaria a arte brasileira.\n");


         do {
        printf("Deseja saber o que é modernismo? (1- Sim/0- Não): ");
        if (scanf("%d", &informacao) != 1) {
        printf("Entrada inválida. Por favor, insira um valor numérico.\n");
        while (getchar() != '\n');//funcao para verificar se é numero ou letra
        continue;
        }
        } while (informacao != 1 && informacao != 0);

    printf("\n");

    if (informacao == 1){
        sleep(0.5);


        system("cls");

        printf(ANSI_COLOR_GREEN"- Modernismo"ANSI_COLOR_RESET": Principal movimento libertário do seculo XX, responsável por definir identidades artisticas dentro do cenário Brasileiro. Seja com pintura, musica ou outras manifestações artistícas. Sua principal carácteristica é o Nacionalismo.");

        } else if (informacao == 0) {
            printf("Obrigado pela visita!\n");
        } else {
            printf("Opção invalida! Por favor, insira 1 ou 0");
        }
        printf("\n");

        printseparator();
}

void santos_dumont() {
printf(ANSI_COLOR_GREEN "\n150 anos de Santos Dumont" ANSI_COLOR_RESET ":");

    printseparator();

    printf("No mês de julho de 2023, celebramos o 147º aniversário do inventor brasileiro Santos Dumont. Em 23 de outubro de 1906, ele alcançou um feito histórico ao realizar o primeiro voo bem-sucedido com uma aeronave mais pesada que o ar, sem a necessidade de um dispositivo de propulsão para decolar. Esse evento memorável ocorreu na aeronave "ANSI_COLOR_BLUE "14-BIS" ANSI_COLOR_RESET ",no campo de Bagatelle, localizado no centro de Paris, na França, uma das principais cidades globais reconhecidas por seu ambiente inovador e progressista. A mídia daquela época destacou amplamente a conquista notável de Santos Dumont, que se tornou um pioneiro na história da aviação mundial e foi reverenciado como o Pai da aviação.");

 printseparator();

    printf("Na imagem, o 14 Bis, uma inovação audaciosa de Santos Dumont, voa graciosamente pelos céus, capturando a admiração de todos. Esse momento icônico simboliza o triunfo da engenhosidade humana sobre os limites da gravidade, marcando um avanço crucial na história da aviação que inspirou futuras gerações de pioneiros. Santos Dumont faleceu em 23 de julho de 1932, encontrado enforcado em um hotel em Guarujá (SP). O motivo de seu suicídio nunca foi esclarecido.\n");

    printseparator();

}


void olympcs() {

printf(ANSI_COLOR_GREEN"Jogos olímpicos de Paris 2024:\n"ANSI_COLOR_RESET);

    printseparator();

    printf("Os Jogos Olímpicos de Paris 2024 representam a 33ª edição do maior evento esportivo do mundo, que reúne atletas de diversas nações em competições de alto nivel. Este evento esportivo internacional acontecerá na encantadora cidade de Paris, na França, marcando seu retorno como cidade-sede após um século, já que a última vez que sediou os Jogos foi em 1924. Paris, com sua rica história, impressionante arquitetura e vibrante cena cultural, servirá como um cenário espetacular para este evento. Os Jogos Olímpicos de Paris 2024 também deixarão um legado significativo, promovendo o esporte e as relações internacionais de longa duração.");

    printseparator();

    printf("Aqui uma representação dos anéis olímpicos: \n\n");

    rings();

    printf("Os anéis olímpicos são um dos emblemas mais icônicos e facilmente reconhecíveis dos Jogos Olímpicos. Compostos por cinco anéis entrelaçados, cada um exibindo uma cor diferente (azul, amarelo, preto, verde e vermelho), esses anéis simbolizam os cinco continentes do mundo: Europa, Ásia, África, América e Oceania. Eles carregam a mensagem de que o esporte é uma linguagem universal capaz de unir nações, promovendo a paz e o entendimento global por meio da competição justa e do espírito olímpico. Pierre de Coubertin, o visionário fundador dos Jogos Olímpicos modernos, é o responsável por conceber esses anéis, que fizeram sua primeira aparição nos Jogos Olímpicos de Verão de 1920, em Antuérpia, na Bélgica. Desde então, os anéis olímpicos se tornaram um símbolo duradouro e poderoso do movimento olímpico.");

    printf(ANSI_COLOR_YELLOW"\n-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n"ANSI_COLOR_RESET);

    printf("\n");

}

void rings() {
    printf("       .-=-.   .-=-.   .-=-.\n");
    printf("      /     \\ /     \\ /     \\\n");
    printf("     |       |       |       |\n");
    printf("      \\    ./=\\.   ./=\\.    /\n");
    printf("       '-=/'   '\\-/'   '\\=-'\n");
    printf("         |       |       |\n");
    printf("          \\     / \\     /\n");
    printf("           '-=-'   '-=-'\n");
}

void porto (int informacao) {
    printf(ANSI_COLOR_GREEN"Porto de Santos:\n"ANSI_COLOR_RESET);

    printseparator();

    printf("O Porto de Santos também é de extrema importância para a cafeicultura brasileira. Historicamente, o porto desempenhou um papel vital na exportação de café, que é um dos principais produtos de exportação do Brasil. A localização estratégica do Porto de Santos na região produtora de café, juntamente com sua infraestrutura de transporte eficiente, facilitou o escoamento desse produto para mercados internacionais, contribuindo significativamente para o sucesso e crescimento da indústria cafeeira no país.");

    printseparator();

    printf("No quadro " ANSI_COLOR_BLUE "''Carregamento do Porto de Santos''" ANSI_COLOR_RESET ", de Benedito Calixto , retrata a cena de carregamento e descarregamento de navios no Porto de Santos, localizado no estado de São Paulo, durante o ano de 1890. A pintura é conhecida por sua riqueza de detalhes e pela representação vívida das atividades portuárias da época, incluindo a presença de guindastes, navios a vapor e trabalhadores em ação. A obra de Benedito Calixto é um importante registro histórico da atividade portuária no final do século XIX e é valorizada por sua contribuição para a documentação visual da história brasileira.\n");

    do {
        printf("Deseja uma curiosidade sobre o Porto de Santos? (1- Sim/0- Não): ");
        if (scanf("%d", &informacao) != 1) {
        printf("Entrada inválida. Por favor, insira um valor numérico.\n");
        while (getchar() != '\n');//funcao para verificar se é numero ou letra
        continue;
        }
        } while (informacao != 1 && informacao != 0);


    if (informacao == 1) {
        sleep(0.5);
        system("cls");
        printf("O Porto de Santos conheceu sua" ANSI_COLOR_YELLOW "'Era de Ouro'" ANSI_COLOR_RESET " durante o Ciclo do Café, que trouxe grande riqueza e desenvolvimento à cidade de Santos.\n");

    } else if (informacao == 0) {
        printf("Obrigado pela visita!\n");
    } else {
        printf("Opção inválida! Por favor, insira 1 ou .\n");
    }
    printf("\n");
    printf("\n");
}

void question (int satisf, char esc [4][5] , char nome[4][30], int quantidade, char obra [60]) {
int i = 0;
    do {
        printf("Gostaria de responder um questionario de satisfação? (1-Sim/2-Não)");
        if (scanf("%d", &satisf) != 1) {
        printf("Entrada inválida. Por favor, insira um valor numérico.\n");
        while (getchar() != '\n');//funcao para verificar se é numero ou letra
        continue;
        }

       if (satisf == 1){
        sleep(0.5);
        system("cls");
        break;
    } else if (satisf == 2) {
    printf("Tudo bem! Obrigado pela visita.");
    exit(0);
    }else {
        printf("Opção invalida tente novamente!");
}

}while (satisf != 1 && satisf != 2);

 FILE*file = fopen("resultados.csv", "a");

 if (file==NULL) {
    printf("Erro ao abrir arquivo");
    return;
 }
   do {
        for (i = 0; i < quantidade; i++) {
        printf("Visitante %d\n: " , i+1);
        printf("Qual seu grau de satisfação? \n(A) Muito satisfeito\n(B) Satisfeito\n(C) Decepcionado\n(D) Péssimo\n ");
            scanf(" %c" , &esc[i][0]);
            if (esc[i][0] != 'A' && esc[i][0] != 'B' && esc[i][0] != 'C' && esc[i][0] != 'D') {
                printf("Escolha inválida\n");
                i--;
            }
    }
     fprintf(file, "Obra: %s\n",obra);

    }while (i < quantidade);
    for (i = 0; i < quantidade; i++) {
        fprintf(file, "Visitante %d;%c\n", i+1 , esc[i][0]);
        }
    fclose(file);
}
