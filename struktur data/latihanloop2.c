#include <stdio.h>

int main(void) 
{
 int i,a,b,c;
 printf("Input tinggi segitiga : ");
 scanf("%d", &a);

 for (i=1; i<=a; i++)  /* perulangan banyaknya baris bintang sesuai dengan angka yang diinput */
    {
        for (c=a; c>=i; c--) /* perulangan dari spasi untuk jarak sebelum bintang dicetak */
    {
            printf(" ");
    }
        for (b=1; b<=i; b++)  /* perulangan bintang yang dicetak dilayar */
            printf("*");
                printf("\n");
    }
 return 0;
}
