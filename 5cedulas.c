#include <stdio.h>

int main(){
int valorEmReais, numeroDeNotas;

scanf("%d", &valorEmReais);
printf("%d\n", valorEmReais);

numeroDeNotas = valorEmReais / 100;
valorEmReais = valorEmReais % 100;
printf("%d notas(s) de R$100,00\n", numeroDeNotas);

numeroDeNotas = valorEmReais / 50;
valorEmReais = valorEmReais % 50;
printf("%d notas(s) de R$50,00\n", numeroDeNotas);

numeroDeNotas = valorEmReais / 20;
valorEmReais = valorEmReais % 20;
printf("%d notas(s) de R$20,00\n", numeroDeNotas);

numeroDeNotas = valorEmReais / 10;
valorEmReais = valorEmReais % 10;
printf("%d notas(s) de R$10,00\n", numeroDeNotas);

numeroDeNotas = valorEmReais / 5;
valorEmReais = valorEmReais % 5;
printf("%d notas(s) de R$5,00\n", numeroDeNotas);

numeroDeNotas = valorEmReais / 2;
valorEmReais = valorEmReais % 2;
printf("%d notas(s) de R$2,00\n", numeroDeNotas);

numeroDeNotas = valorEmReais / 1;
valorEmReais = valorEmReais % 1;
printf("%d notas(s) de R$1,00\n", numeroDeNotas);

    return 0;
}