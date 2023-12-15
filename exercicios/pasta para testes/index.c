#include <stdio.h>

int main()
{
   int i;

   for (i = 1; i < 10; i++)
   {
      int numero = rand() % 51;
      printf("%i\n", numero);
   }
   
   
}
