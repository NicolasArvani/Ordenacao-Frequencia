#include <stdio.h>

int main(void) 
{
  int v[50], qtd=0, i, j, aux;
  double mediana;
  char stop;

  while(1)
  {
    if(scanf("%d", &v[qtd]) != EOF)
    qtd++;
    else break;
  }

  for(i = 0; i < qtd - 1; i++)
  {
    for(j = i; j < qtd; j++)
    if(v[i] > v[j])
    {
      aux = v[i];
      v[i] = v[j];
      v[j] = aux;
    }
  }

  // for(j = 0; j < qtd; j++)
  //   printf("%d ", v[j]);
  // printf("\nqtd=%d\n",qtd);

  if(qtd % 2 == 0)
  {
    printf("Mediana = %.1lf",(double) (v[qtd / 2] + v[(qtd / 2) - 1]) / 2);
  }
  else
  {
    printf("Mediana = %d",v[(qtd / 2)]);
  }



  return 0;
} 