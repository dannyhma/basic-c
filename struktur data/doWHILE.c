/* File: doWHILE.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */                                       
/* print “Saya senang” sebanyak 3 kali */
/* do {
      /* Badan loop */
     /* deretan instruksi yang diulang 
     } while (<kondisi-pengulangan>); */
#include<stdio.h>
int main ()
{
/* Kamus : */
  int i=0;
  printf("Tulis : ");
  scanf("%d", &i);
 /* Algoritma */
 do  {
     printf ("%d. Saya senang belajar bahasa C \n", i);
     i++;
 } while (i<6);
  return 0;
}