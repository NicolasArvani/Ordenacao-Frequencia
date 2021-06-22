#include <stdio.h>

int main(void)
{
  int n, i, j, v[10000], inv[10000], d[10000], qtd, aux;
  scanf("%d", &n);

  for(i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
    inv[i] = v[i];
    d[i] = v[i];
  } 

  if(n % 2 == 0)
    qtd = n / 2; 
  else
    qtd = (n / 2) + 1;
  
  for(i = 0; i < qtd; i++)
  {
    aux = inv[i];
    inv[i] = inv[(n-1)-i];
    inv[(n-1)-i] = aux;
  }

  aux = v[0];
  for(i = 0; i < n-1; i++)
    v[i] = v[i+1];
  v[n-1] = aux;

  for(i = 0; i < n; i++)
    for(j = i; j < n; j++)
      if(d[i] < d[j])
      {
        aux = d[i];
        d[i] = d[j];
        d[j] = aux;
      }

  for(i = 0; i < n; i++)
    {
      printf("%d", inv[i]);
      if(i != n-1)
        printf(" ");
    }
  printf("\n");
  for(i = 0; i < n; i++)
    {
      printf("%d", v[i]);
      if(i != n-1)
        printf(" ");
    }
  printf("\n");
  for(i = 0; i < n; i++)
    {
      printf("%d", d[i]);
      if(i != n-1)
        printf(" ");
    }
  printf("\n");


return 0;
}