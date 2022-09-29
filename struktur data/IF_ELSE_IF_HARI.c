/* File: IF_ELSE_IF_HARI.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */
/* contoh pemakaian IF tiga kasus */
/* Berdasarkan kode hari dalam minggu, 
   Anda akan menuliskan
   (0=Minggu; 1=Senin; 2=Selasa; 3=Rabu; 4=Kamis; 5=Jumat; 6=Sabtu) */
#include <stdio.h>

int main()
{
/* Kamus */
  int kode_hari;
  /* Program */
  printf ("Kode dalam hari \n");
  printf ("0 = Minggu; 1 = Senin; 2 = Selasa; 3 = Rabu; \n");
  printf ("4 = Kamis; 5 = Jumat; 6 = Sabtu \n");
  printf ("Ketikkan kode dalam hari : ");
  scanf ("%d", &kode_hari);
    if (kode_hari == 0)
        {
            printf ("Kode %d Adalah Hari Minggu \n", kode_hari);
        }
    else if (kode_hari == 1)
        {
            printf ("Kode %d Adalah Hari Senin \n", kode_hari);
        }
    else if (kode_hari == 2)
        {
            printf ("Kode %d Adalah Hari Selasa \n", kode_hari);
        }
    else if (kode_hari == 3)
        {
            printf ("Kode %d Adalah Hari Rabu \n", kode_hari);
        }
    else if (kode_hari == 4)
        {
            printf ("Kode %d Adalah Hari Kamis \n", kode_hari);
        }
    else if (kode_hari == 5)
        {
            printf ("Kode %d Adalah Hari Jumat \n", kode_hari);
        }
    else if (kode_hari == 6)
        {
            printf ("Kode %d Adalah Hari Sabtu \n", kode_hari);
        }
    else /* kode_hari tidak ada (not) diantara variabel (0-6)*/
    {
      printf ("%d Tidak Ada Dalam Kode Hari \n", kode_hari);
    }         
    return 0;
}