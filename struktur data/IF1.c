/* File: IF1.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */                                                
/* contoh pemakaian IF satu kasus */
/* membaca nilai integer, menuliskan nilainya jika positif */
/*if </*kondisi> */
    /* instruksi atau deretan instruksi */
#include <stdio.h>

int main()
{
/* Kamus */
  int a;
  /* Program */
  printf ("Contoh IF satu kasus \n");
  printf ("Ketikkan suatu nilai integer ");
  scanf ("%d", &a);
  if (a >= 0)
    {
      printf ("Nilai a positif %d \n", a);
    }
 /* jika nilai a tidak positif maka program tidak melakukan apa-apa */
  return 0;
}
