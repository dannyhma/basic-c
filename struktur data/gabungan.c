/* File: gabungan.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */                                             
/* Contoh perbandingan nilai numerik */
#include <stdio.h>

int main()
{/* Kamus */
  int uang= 6000;
  int hujan= 0; /* artinya hujan bernilai FALSE */
  /* Program */
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
  /* Kondisi = uang lebih besar dari 5000 dan tidak hujan maka bernilai TRUE : 1*/
   uang= 4000;
   hujan= 1; /* artinya hujan bernilai TRUE */
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
   /* Kondisi = uang lebih besar dari 5000 dan tidak hujan maka bernilai FALSE : 0*/
 
   return 0;
}