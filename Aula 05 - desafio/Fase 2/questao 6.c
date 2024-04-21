
#include <stdio.h>
#include <string.h>

char letra[1];

int main ()
{
  printf ("Olá!!, insira a letra A:");
  scanf ("%s", letra);

  if (strcmp (letra, "a") == 0)
	{
	  printf ("A letra é minuscula");
	}
  else if (strcmp (letra, "A") == 0)
	{
	  printf ("A letra é maiscula");
	}
  else
	{
	  printf ("Por favor, insira a letra A");
	}
  return 0;
}
