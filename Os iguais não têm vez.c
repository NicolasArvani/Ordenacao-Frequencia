#include <stdio.h>

int main(void)
{
    int n, i, j, aux, f[50], v[50];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
      scanf("%d", &v[i]);
      f[i] = 1;
    }
    
    for(i = 0; i < n; i++)
      for(j = i+1; j < n; j++)
        if(v[i] > v[j])
        {
          aux = v[i];
          v[i] = v[j];
          v[j] = aux;
        }

    for(i = 0; i < n; i++)
      for(j = i+1; j < n; j++)
        if(v[i] == v[j])
          f[j] = -1;

    for(i = 0; i < n; i++)
    {
      if(f[i] != -1)
        printf("%d ", v[i]);
      
    }
    return 0;
}
