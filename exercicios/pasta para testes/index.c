#include <stdio.h>

int fuction(int, int);

int main()
{
   FILE *sla = fopen("index.txt", "r");
   char array[100];

   while (fgets(array, 100, sla))
   {
      printf("%s", array);
   }
   
   fclose(sla);

   return 0;
}

