/* File: aritmatika.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Operasi aritmatika bilangan integer dan bilangan riil :
 Menuliskan jumlah, hasil perkalian, pembagian, modulo
 dua buah variabel integer */
#include <stdio.h>

int main()
{/* Kamus */
  int x=7;
  int y=5;
  /* Program */
  printf ("Ini nilai x + y : %d \n", x+y );
  printf ("Ini nilai x - y : %d \n", x-y );
  printf ("Ini nilai x * y : %d \n", x*y );
  printf ("Ini nilai x / y : %d \n", x/y );
  printf ("Ini nilai y / x : %d \n", y/x );
  printf ("Ini nilai x mod  y : %d \n", x%y );
  printf ("Ini nilai x + x + x : %d \n", x+x+x );
  printf ("Ini nilai x * x + x : %d \n", x*x+x );
  printf ("Ini nilai ((x+x)/(x*y)*y)-x)+y) : %d \n", (((x+x)/(x*y)*y)-x)+y);
 /* ((((x+x)/(x*y)*y)-x)+y) */
 
/* bandingkan dengan operasi pembagian bilangan riil */
 float a=10, b=5;
 printf ("Ini nilai a / b  : %5.2f \n", a/b );
 printf ("Ini nilai b / a  : %5.2f \n", b/a );
 /*  %f : menampilkan nilai pecahan, %5.2f : menampilkan nilai pecahan .000... ( .0 lebih banyak)
 dan spasi/jarak lebih jauh dari = (sama dengan) */ 
  return 0;
}