#include <stdio.h>


int main(void)
{
    int c, v, i, x, j, menor, maior=0, n[999999]={0}, m[3];
    scanf("%d%d", &c, &v);
    
    for(i = 0; i < c; i++)
      for(j = 0; j < v; j++)
      { 
        scanf("%d", &x);
        n[i] += x;
      }
    
    for(i = 0; i < c; i++)
      if(n[maior] < n[i])
        maior = i;



    for(j = 0; j < 3; j++)
    {
      for(i = 0; i < c; i++)
      {
        if(i == 0)
          menor = maior;
        if(n[i] < n[menor] && n[i] != -1)
          menor = i;
      }
      m[j] = menor;
      n[menor] = -1;
    }

    for(i = 0; i < 3; i++)
    printf("%d\n", m[i] + 1);

    return 0;
}
