/* File: relasional.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */                                     
/* Contoh perbandingan nilai numerik */
#include <stdio.h>

int main()
{/* Kamus */
  int X=10;
  int Y=15;
  /* Program */
   printf ("Hasil X < Y  : %d \n",  X < Y);/* X lebih kecil dari Y, TRUE : 1 */
   printf ("Hasil X > Y  : %d \n",  X > Y);/* X lebih besar dari Y, FALSE : 0 */
   printf ("Hasil X <= Y : %d \n",  X <= Y );/* X lebih kecil/sama dengan Y, TRUE : 1 */
   printf ("Hasil X >= Y : %d \n",  X >= Y );/* X lebih besar/sama dengan Y, FALSE : 0 */
   printf ("Hasil X == Y : %d \n", X == Y ); /* operator kesamaan : ==, X sama dengan Y, FALSE : 0 */
   printf ("Hasil X != Y : %d \n", X != Y); /* operator ke-tidak-samaan : !=, X tidak sama dengan Y, TRUE : 0 */
   printf ("Hasil X == X : %d \n", X == X ); /* operator kesamaan : ==, X sama dengan X, TRUE : 1 */
   printf ("Hasil X != X : %d \n",X != X); /* operator ke-tidak-samaan : !=, X tidak sama dengan X, FALSE : 0 */
   return 0;
}