#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Estado[20];
char cidade[20]; 
int codigo;
int habitantes;
float area;
float pib;
int turisticos;

char Estado2[20];
char cidade2[20]; 
int codigo2;
int habitantes2;
float area2;
float pib2;
int turisticos2;
printf("Bem vindo ao jogo das Cartas\n");

printf ("digite  um estado. \n");
fgets(Estado,sizeof(Estado),stdin);

printf ("Digite uma Cidade. \n");
fgets (cidade,sizeof(cidade), stdin);

printf("Digite uma numeração. \n");
scanf("%d", &codigo);

printf("Digite o numero de Habitantes dessa cidade. \n");
scanf("%d", &habitantes );

printf("Digite Area dessa cidade Em Km \n");
scanf("%f", &area);

printf("Digite o Pib dessa cidade.\n");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &turisticos);

printf("|Codigo da Carta - %.1s0%d| \n|Estado - %s|\n|Cidade - %s|\n|Numeros de Habitante -%d|\n|Area dessa cidade - %.2f Km|\n|Pib - %.2f Bilhoes|\n|Quantidade de pontos turisticos - %d|", Estado , codigo , Estado , cidade, habitantes, area, pib, turisticos );

printf ("Digite outro  estado. \n");
fgets(Estado2,sizeof(Estado2),stdin);

printf ("Digite outra Cidade. \n");
fgets (cidade2,sizeof(cidade2), stdin);

printf("Digite outra numeração. \n");
scanf("%d", &codigo2);

printf("Digite o numero de Habitantes dessa cidade. \n");
scanf("%d", &habitantes2 );

printf("Digite Area dessa cidade Em Km \n");
scanf("%f", &area2);

printf("Digite o Pib dessa cidade.\n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turisticos.\n");
scanf("%d", &turisticos2);

printf("Segunda Carta \n|Codigo da Carta - %.1s0%d| \n|Estado - %s|\n|Cidade - %s|\n|Numeros de Habitante -%d|\n|Area dessa cidade - %.2f Km|\n|Pib - %.2f Bilhoes|\n|Quantidade de pontos turisticos - %d|", Estado2 , codigo2 , Estado2 , cidade2, habitantes2, area2, pib2, turisticos2 );

printf("Muito obrigado");


    return 0;
}
