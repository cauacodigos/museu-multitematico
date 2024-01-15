#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED

float baixa(int disponivel, int quantidade);
float vendas (int quantidade, int idade, float ingresso, float valor_total);
float dinheiro(float cedula, float troco, float valor_total);
float debito(float valor_total,int i);
float credito (float valor_total, int i, int parcela, int quantidade);
void estatistica (char esc[4][5] , int quantidade, char obra[60]);

#endif // TICKET_H_INCLUDED
