/* File: assignKar.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Mengisi variabel i yg bertype in dengan nilai 5 dan menuliskannya */
/* Deskripsi : */
/* Program ini berisi contoh sederhana untuk mendefinisikan */
/* variabel bertype karakter */
#include <stdio.h>

int main()
{/* KAMUS */
    char c = 65; /* inisialisasi nilai karakter dengan 65 = kode huruf ‘A’ */
    char c1;
    char d = 70;
    char d1;
/* Algoritma */
/* Penulisan karakter sebagai huruf */
    printf ("Karakter = %c \n", c);
    c1 = 'Z'; /* variabel c1 diisi dengan huruf ‘Z’ */
    d1 = 'D';
    printf ("Karakter = %c \n", c1);
    printf ("Karakter = %c \n", d);
    printf ("Karakter = %c \n", d1);
/* Penulisan karakter */
/* Jika deklarasi variabel angka (0-9) menggunakan inisialisasi %d maka hasilnya tidak akan berubah */
/* Dan jika deklarasi variabel angka (0-9) menggunakan inisialisasi %c maka hasilnya 
   akan berubah menjadi huruf abjad (a-z)*/
/* Jika deklarasi variabel huruf abjad (a-z) menggunakan inisialisasi %d maka hasilnya 
   akan berubah menjadi angka (0-9) */
/* Dan jika deklarasi variabel huruf abjad (a-z) menggunakan inisialisasi %c maka hasilnya tidak akan berubah */
/* Inisialisasi %d = desimal */
/* Inisialisasi %c = karakter */
/* Mudahnya jika angka menggunakan inisialisasi %d (desimal) maka ia tidak akan berubah */
/* Dan jika angka menggunakan inisialisasi %c (karakter) maka ia akan berubah menjadi karakter abjad */
/* Sebaliknya jika abjad menggunakan inisialisasi %d (desimal) maka akan berubah menjadi karakter angka */
/* Dan jika abjad menggunakan inisialisasi %c (karakter) maka ia tidak akan berubah */
    printf ("Karakter dalam kode ASCII = %d \n", c);
    printf ("Karakter sebagai huruf = %c \n", c);
    printf ("Karakter dalam kode ASCII = %d \n", c1);
    printf ("Karakter sebagai huruf = %c \n", c1);
    printf ("Karakter dalam kode ASCCI = %d \n", d);
    printf ("Karakter sebagai huruf = %c \n", d);
    printf ("Karakter dalam kode ASCCII = %d \n", d1);
    printf ("Karakter dalam kode huruf = %c \n", d1);
return 0;
}
