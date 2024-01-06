#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

char *concat(const char *s, ...)
{
  va_list args;
  char *tmp;
  char *res;
  size_t len= strlen(s);

  // pega um handle ao início da lista de parâmetros
  va_start(args, s);

  // calcula o tamanho total de todas as strings
  // pega o próximo parâmetro da lista, até chegar no NULL
  while ((tmp= va_arg(args, char*)))  {
     len+= strlen(tmp);
  }

  va_end(args);
  res= malloc(len+1);
  if (!res) return NULL;

  // cria a string concatenada
  strcpy(res, s);
  va_start(args, s);

  // pega o próximo parâmetro da lista, até chegar no NULL
  while ((tmp= va_arg(args, char*)))  {
     strcat(res, tmp);
  }
  va_end(args);

  return res;
}

int main()
{
  char *s= concat("hello", " ", "world", "!!!!", NULL);
  puts(s);
  free(s);
  return 0;
}

