/* File: IF_ELSE.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */                                 
/* contoh pemakaian IF dua kasus komplementer */
/* Membaca sebuah nilai, */
/* menuliskan 'Nilai a positif , nilai a', jika a >=0 */
/*            'Nilai a negatif , nilai a', jika a <0  */
/* if </*kondisi> */ 
/*  { 
    /* instruksi atau deretan instruksi yang dijalankan
       jika evaluasi kondisi TRUE*/
/*  }
else
    { 
    /* instruksi atau deretan instruksi yang dijalankan
        jika evaluasi kondisi FALSE */
/*  } */
#include <stdio.h>

int main()
{
/* Kamus */
  int a;
  /* Program */
  printf ("Contoh IF dua kasus \n");
  printf ("Ketikkan suatu nilai integer : ");
  scanf ("%d", &a);
  if (a >= 0)
    {
      printf ("Nilai a positif %d \n", a);
    }
  else /* a < 0 */
    {
      printf ("Nilai a negatif %d \n", a);
    }
  return 0;
}