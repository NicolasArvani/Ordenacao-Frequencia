#include <stdio.h>

int main(void)
{
  long long int i, j, flag=1;
  double r;
  long long int v[5], aux;
  for(i = 0; i < 5; i++)
    scanf("%lld", &v[i]);

  for(i = 0; i < 5; i++)
    for(j = i; j < 5; j++)
      if(v[i] > v[j])
      {
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }

  for(i = 0; i < 4; i++)
  {
    if(i == 0)
      r = (double)v[i+1] / v[i];
    if(v[i+1] / v[i] != r)
      flag = 0;
  }


  if(flag == 0)
    printf("N\n");
  else
  {
    printf("S\n");
    for(i = 0; i < 5; i++)
    {
      printf("%lld", v[i]);
      if(i != 4)
        printf(" ");
    }
    printf("\n%g\n", r);

  }

  return 0;
}