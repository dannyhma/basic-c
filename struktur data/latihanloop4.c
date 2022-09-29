#include <stdio.h>

int main (void)
{
  int a,b,n;
  
  printf ("Masukkan Tinggi Segitiga: ");
  scanf("%d",&n);
  
  for (a=1; a<=n; a++)
    {
        for (b=a; b<=n; b++)
            {
                printf(" ");
            }
        for (b=1; b<=a; b++)
            {
                printf("*");
            }
        for (b=1; b<a; b++)
            {
                printf("*");
            }
                printf("\n");  
    }
    return 0;
}