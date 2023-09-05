#include<stdio.h>

int main()
{
 int anos, semanas, dias;
   
 scanf("%d", &dias);
   
 anos = dias / 365;
   
 semanas = dias % 365 / 30;
   
 dias = dias % 365 % 30;
   
 printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, semanas, dias);
   
 return 0;
   
}