#include <stdio.h>

int main(void)
{
  int i, j, v[100], x=0, aux;

  scanf("%d", &v[x]);
  while(v[x] != 99)
  {
    x++;
    scanf("%d", &v[x]);
  }

  for(i = 0; i < x-1; i++)
    for(j = i+1; j < x; j++)
      if(v[i] < v[j])
      {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
      
    printf("%d", v[1]);

  return 0;
}