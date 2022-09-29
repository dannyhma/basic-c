/* File: maxsort.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */
/* Mengurutkan elemen tabel dengan metoda makimum sort */
#include <stdio.h>
int main()
{
  /* Kamus : */
  int i;
  int Tab[20]= { 62, 59, 62, 59, 62, 62, 58, 61, 57, 65, 64, 60, 57, 61, 62, 59, 64, 67, 59, 63 };
  int max; /* indek di mana  Tab[max] bernilai maksimum */
  int k, temp; /* variabel kerja */
  /* Algoritma maximum sort menurun, indeks paling kecil berisi nilai paling besar*/
  for (i=0; i<19; i++ ){
  /* tentukan indeks max, di mana Tab[max] bernilai maksimum */
  /* untuk index tabel i..10 */
     max = i;
     for (k= i+1 ;k< 20; k++)  
     {
        if (Tab[k]< Tab[max]) 
        {
           max=k;
        }
     } 
 
    /* Tukar nilai Tab[max] dengan tab[i] */
    temp= Tab[i];
    Tab[i]= Tab[max];
    Tab[max] = temp;
  }
  for (i=0;i<20;i++) 
  {
     printf (" %d ; ", Tab[i]);
  }
  return 0;
}