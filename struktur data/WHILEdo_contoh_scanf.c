/* File: WHILEdo_contoh_scanf.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
#include <stdio.h>

int main()
{
/* Kamus : */
 int i=0;
 printf("Tulis : ");
 scanf("%d", &i);
/* Algoritma */
 while (i<11) { /* program diulang selama nilai i < 3 */
     printf ("Saya senang belajar bahasa C : %d \n", i);
     i++;
 }
 return 0;
}