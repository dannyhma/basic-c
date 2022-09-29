/* File: boolOP.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */
/* Contoh perhitungan aljabar boolen, perhatikan cara penulisan
   AND dan OR serta NOT */
#include <stdio.h>

int main()
{/* Kamus */
  int TRUE=1;
  int FALSE=0;
  /* Algoritma  */
   printf ("Ini nilai TRUE AND TRUE  : %d \n",  TRUE && TRUE );
   printf ("Ini nilai TRUE OR FALSE  : %d \n",  TRUE || FALSE);
   printf ("Ini nilai FALSE AND TRUE  : %d \n",  FALSE && TRUE );
   printf ("Ini nilai FALSE OR FALSE  : %d \n",  FALSE || FALSE );
   printf ("Ini nilai NOT TRUE  : %d \n", !TRUE);
   printf ("Ini nilai NOT FALSE  : %d \n", !FALSE );
   printf ("\n");
/* Modifikasi operasi boolean */
   printf ("Ini nilai OR TRUE, FALSE : %d \n",  TRUE || FALSE );
   printf ("Ini nilai OR TRUE, TRUE, TRUE : %d \n",  TRUE || TRUE || TRUE );
   printf ("Ini nilai OR FALSE, TRUE, FALSE : %d \n",  FALSE || TRUE || FALSE );
   printf ("Ini nilai AND TRUE, FALSE : %d \n",  TRUE && FALSE );
   printf ("Ini nilai AND TRUE, TRUE, FALSE : %d \n",  TRUE && TRUE && TRUE );
   printf ("Ini nilai AND FALSE, FALSE, FALSE : %d \n",  FALSE && FALSE && FALSE );

  return 0;
}