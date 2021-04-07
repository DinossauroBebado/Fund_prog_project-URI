#include <stdio.h>

int main() {
 int idade, mes,ano,dia;

 scanf("%d",&idade);

 ano = idade/365;
 mes = (idade%365)/30 ;
 dia = idade%(ano*365+mes*30);

 printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
    return 0;
}
