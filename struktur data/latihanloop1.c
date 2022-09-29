#include <stdio.h>
 
int main(void)
{
  int jumlah, j, i;
 
  printf("Input tinggi segitiga: ");
  scanf("%i", &jumlah);
  printf("\n");
 
  for (i=1; i<=jumlah; i++) 
    {
        for (j=1; j<=i; j++) {
            printf("*");
    }
            printf("\n");
  }
  return 0;
}