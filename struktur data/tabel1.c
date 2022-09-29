/* File: tabel1.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */
/* Mendefinisikan array dan mengisi nilainya */
#include <stdio.h>

int main()
{/* Kamus : */
/* Kamus */
  int Tab[6]= {0, 1, 2, 3, 4, 5};/* Tab[0]=1; Tab[1]=2; . .. Tab[4]=5 */
  float TabX[3]= {1.5, 3.5E2, 9.99};
  char Tabchar[6]= {'A', 'B', 'C', 'D', 'E', 'F'};
 
  int i; /* untuk iterasi indeks tabel */
 /* menuliskan isi Tab berderet ke kanan*/
 for (i=0; i<6; i++) {
     printf ("TAB [%d] = %c ;\n", i, Tabchar[i]);
 }
 printf ("\n");
  
 /* Latihan : tuliskan nilai TabX dan TabChar */
  
  return 0;
}