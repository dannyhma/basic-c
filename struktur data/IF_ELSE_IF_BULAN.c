/* File: IF_ELSE_IF_BULAN.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */
/* contoh pemakaian IF tiga kasus */
/* Berdasarkan kode dalam bulan */
#include <stdio.h>

int main()
{
/* Kamus */
  int kode_bulan;
  /* Program */
  printf ("Kode dalam bulan \n");
  printf ("1 = JANUARI; 2 = FEBRUARI; 3 = MARET; 4 = APRIL; 5 = MEI; 6 = JUNI; \n");
  printf ("7 = JULI; 8 = AGUSTUS; 9 = SEPTEMBER; 10 = OKTOBER; 11 = NOVEMBER; 12 = DESEMBER; \n");
  printf ("Ketikkan kode dalam bulan : ");
  scanf ("%d", &kode_bulan);
    if (kode_bulan == 1)
        {
            printf ("Kode %d Adalah Bulan JANUARI \n", kode_bulan);
        }
    else if (kode_bulan == 2)
        {
            printf ("Kode %d Adalah Bulan FEBRUARI \n", kode_bulan);
        }
    else if (kode_bulan == 3)
        {
            printf ("Kode %d Adalah Bulan MARET \n", kode_bulan);
        }
    else if (kode_bulan == 4)
        {
            printf ("Kode %d Adalah Bulan APRIL \n", kode_bulan);
        }
    else if (kode_bulan == 5)
        {
            printf ("Kode %d Adalah Bulan MEI \n", kode_bulan);
        }
    else if (kode_bulan == 6)
        {
            printf ("Kode %d Adalah Bulan JUNI \n", kode_bulan);
        }
    else if (kode_bulan == 7)
        {
            printf ("Kode %d Adalah Bulan JULI \n", kode_bulan);
        }
    else if (kode_bulan == 8)
        {
            printf ("Kode %d Adalah Bulan AGUSTUS \n", kode_bulan);
        }
    else if (kode_bulan == 9)
        {
            printf ("Kode %d Adalah Bulan SEPTEMBER \n", kode_bulan);
        }
    else if (kode_bulan == 10)
        {
            printf ("Kode %d Adalah Bulan OKTOBER \n", kode_bulan);
        }
    else if (kode_bulan == 11)
        {
            printf ("Kode %d Adalah Bulan NOVEMBER \n", kode_bulan);
        }
    else if (kode_bulan == 12)
        {
            printf ("Kode %d Adalah Bulan DSEMBER \n", kode_bulan);
        }
    else
    {
      printf ("%d Tidak Ada Dalam Kode Bulan \n", kode_bulan);
    } 
    return 0;
}