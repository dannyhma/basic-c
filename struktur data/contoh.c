/* File: contoh.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */                                                  
/* implementasi dari function scanf */
#include <stdio.h>

int main(void)
{
  int harga;

  printf("Masukkan harga barang: ");
  scanf("%d", &harga);

  printf("\n");
  printf("Harga barang adalah: %d", harga);
  printf("\n");
  /* scanf = baca, printf = tulis, adalah perintah dasar dalam pemrograman prosedural/imperatif */
  return 0;
}
