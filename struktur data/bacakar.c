/* File: contoh.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi : */
#include <stdio.h>

int main()
{/* Kamus */
char cc;
char c;
 
/* Algoritma */
printf ("hello\n");

printf("baca 1 karakter saja : ");
scanf ("%c %c", &cc, &c);
/* scanf ("%c ", &cc); */
/* scanf ("%c ", &cc); scanf ("%c ", &cc); = function tersebut berfungsi sebagai pembaca karakter no-2, 
contoh karakter : danny, function tersebut akan membaca karakter kedua dari danny yaitu "a" 
(dia akan membaca karakter "a") */
/* scanf ("%c %c", &cc, &c); */

printf("baca 1 karakter saja : ");
scanf ("%d ", &c); /* ketikkan angka 65 */

printf ("%c\n", cc);
printf ("%d\n", c);
return 0;
}