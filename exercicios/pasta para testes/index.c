#include <stdio.h>

typedef struct
{
   char* nome;
   int idade;
}Pessoa;


int main()
{
   Pessoa carlos;
   carlos.idade = 12, carlos.nome = "Carlos";

   printf("%s, %i",carlos.nome, carlos.idade);
   return 0;
}
