/* File: WHILEdo.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */
/* print “Saya senang” sebanyak 3 kali */
/* while (<kondisi-pengulangan>)  {
      /* Badan loop */
     /* deretan instruksi yang diulang 
    } */
#include <stdio.h>

int main()
{
/* Kamus : */
 int i=0;
/* Algoritma */
 while (i<3) { /* program diulang selama nilai i < 3 */
     printf ("Saya senang belajar bahasa C\n");
     i++;
 }
 return 0;
}