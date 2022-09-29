/* File: tabel1_contoh.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */                                             
/* Mendefinisikan array dan mengisi nilainya dari input yang dibaca */
#include <stdio.h>

int main()
{
 /* Kamus */
  int Tab [5];
  char Tabx [5];
  int i; 
  /* baca isi Tab */
  for (i=0; i<5; i++) {
     printf("tulis array : ");
     scanf ("%d", &Tab[i]);
  }  
 
  /* menuliskan isi Tab berderet ke kanan*/
  for (i=0; i<5; i++) {
     printf ("Tab [%d] = %d; \n", i,  Tab[i]);
  }
  printf ("\n");
  return 0;
}
