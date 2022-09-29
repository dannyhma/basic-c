/* File: max.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */
/* Mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer */
#include <stdio.h>

int main()
{/* Kamus : */
  int i;
  int Tab [10]= { 1, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
  int max, min;
  float rata;
  /* Algoritma */
  max = Tab [0];
  min = Tab [0];
  rata = Tab [0];
  for (i=1; i<10; i++)  
  {
     if (Tab[i]>max) 
     {
        max=Tab[i];
     }
     else if (Tab[i]<min)
     {
        min=Tab[i];
     }
     rata=Tab[i];
   } 
  printf ("Nilai Min = %d \n", max);
  printf ("Nilai Min = %d \n", min); 
  printf ("Nilai Median = %d \n", (min+max)/2);
  printf ("Nilai Rata-Rata = %2.f \n", rata);
  return 0;
}