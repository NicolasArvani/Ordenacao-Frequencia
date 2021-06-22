#include <stdio.h>

int main(void)
{
  int t, n, c1[100], c2[100], i, j, vmax=0, qtd=0;
  scanf("%d%d", &t, &n);

  for(i = 0; i < n; i++)
    scanf("%d", &c1[i]);
  for(i = 0; i < n; i++)
    scanf("%d", &c2[i]);


  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
      if(c1[i] + c2[j] > vmax && i+1+j+1 == t)
        vmax = c1[i] + c2[j];
  
  if(n == t)
  {
    if(c1[n-1] >= vmax)
      vmax = c1[n-1];
    if(c2[n-1] >= vmax)
      vmax = c2[n-1];
  }


  
  for(i = 0; i < n; i++)
    for(j = 0; j < n; j++)
      if(c1[i] + c2[j] == vmax && i+1+j+1 == t)
        qtd++;
  
  if(n == t)
  {
    if(c1[n-1] == vmax)
      qtd++;
    if(c2[n-1] == vmax)
      qtd++;
  }



  printf("%d\n", qtd);
  printf("%d\n", vmax);
  
  

  return 0;
}
