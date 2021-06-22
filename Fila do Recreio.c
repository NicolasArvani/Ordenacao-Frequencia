#include <stdio.h>


int main(void)
{
    int n, a, nota[1000], ord[1000], i, j, k, aux, qtd, x;
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
      qtd = 0;
      scanf("%d", &a);
      for(j = 0; j < a; j++)
      {
        scanf("%d", &x);
        ord[j] = x;
        nota[j] = x;
      }

      for(j = 0; j < a; j++)
        for(k = j; k < a; k++)
          if(ord[j] < ord[k])
          {
            aux = ord[j];
            ord[j] = ord[k];
            ord[k] = aux;
          }

      for(j = 0; j < a; j++)
        if(ord[j] != nota[j])
          qtd++;

      printf("%d\n", a - qtd);
    }

    return 0;
}
