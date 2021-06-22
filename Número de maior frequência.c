#include <stdio.h>

int main(void) 
{
  int v[50], f[50], n;
  int i, j;
  int maior_f, maior_n, seq, maior_seq;

  scanf("%d", &n);
  for(i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
    f[i] = 1;
  }



  for(i = 0; i < n - 1; i++){
    if(f[i] != -1)
    {
      for(j = i + 1; j < n; j++)
      {
        if(v[i] == v[j])
        {
          f[i]++;
          f[j] = -1;
        }
      }
    }
  }


  maior_f = 0;
  for(i = 1; i < n; i++){
    if(f[i] > f[maior_f])
      maior_f = i;
    else if(f[i] == f[maior_f])
    {
      if(v[i] < v[maior_f])
        maior_f = i;
    }
  }
  
  seq = 0;
  for(i = 0; i < n; i++)
  {
    if(v[i] == v[maior_f])
      seq++;
    else{
      if(seq > maior_seq)
        maior_seq = seq;
      seq = 0;
    }
  }
  if(seq > maior_seq)
        maior_seq = seq;

  printf("\n\n\n%d\n%d\n%d\n", v[maior_f], f[maior_f], maior_seq);
  return 0;
} 