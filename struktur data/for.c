/* File: for.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi :                                                   
/* print “Saya senang” sebanyak 3 kali */
/* for (<kondisi-awal>; <kondisi-pengulangan>; <perubah-kondisi>) */
      /* Badan loop */
     /* instruksi atau deretan instruksi yang diulang */
#include <stdio.h>

int main()
{
/* Kamus : */
 int i;
 /* Algoritma */
 for (i=0; i<3; i++) {
     printf ("Saya senang belajar bahasa C \n");
 }
 /* for i=0; i<3; (for i=0; i lebih kecil dari 3) */
 /* Pada program di atas, pada awal eksekusi instruksi for, i bernilai 0 dan i akan dievaluasi 
 setiap kali pengulangan untuk nilai i=0,1,2, dengan hasil:

- Pada saat I bernilai 0 atau 1 atau 2, ekspresi i < 3 akan menghasilkan TRUE.
- Pada saat nilai i=3 maka ekspresi i < 3 akan menghasilkan FALSE (salah), loop berhenti. 
Nilai i bisa berubah dari 0 ke 1; 1 ke 2; 2 ke 3 karena setiap kali pelaksanaan, 
berkat instruksi pengubah yaitu i++.

Instruksi for dapat digunakan untuk membuat pengulangan yang lebih umum, yang akan dijelaskan kemudian.*/
  return 0;
}