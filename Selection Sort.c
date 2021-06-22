#include <stdio.h>

int main(void)
{
  int v[100000], n, menor, i, j, qtd, aux;

  while(scanf("%d", &v[qtd]) != EOF)
    qtd++;
  
  for(i = 0; i < qtd-1; i++)  
    {
      menor = i;
      for(j = i; j < qtd; j++)
        {
          if(v[menor] > v[j])
            menor = j;
        }
      aux = v[i];
      v[i] = v[menor];
      v[menor] = aux;
      printf("Menor elemento neste passo: %d\n", v[i]);
      printf("Estado Atual:");
      for(j = 0; j < qtd; j++)
        {
          printf(" %d", v[j]);
          if(j != qtd-1)
            printf(" |");
        }
      printf("\n\n");
    }



    printf("Resultado Final:");
    for(j = 0; j < qtd; j++)
      {
        printf(" %d", v[j]);
        if(j != qtd-1)
          printf(" |");
      }


  return 0;
}