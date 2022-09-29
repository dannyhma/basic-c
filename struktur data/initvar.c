/* File : initvar.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Mengisi variabel i yg bertype in dengan nilai 5 dan menuliskannya */
#include <stdio.h>

int main()
{/* Kamus */
    int i=5;
    float luas=3.5;/* deklarasi dan inisialisasi nilai variabel luas = 3.5 hektar */
    float keliling=2* 10* 5.5;/* keliling dari sebuah lingkaran yang jari-jarinya 5.5 cm */
    int perkalian=10* 10;
    int pertambahan=10+ 10;
    int pengurangan=10- 10;
    int pembagian=10/ 10;
/* Algoritma */
    printf("ini adalah nilai i = %i \n", i);/*untuk mengamati dampak inisialisasi, %d = untuk menampilkan bilangan desimal */
    printf("luas kebunku = %f \n", luas);
    printf("keliling kebunku = %f \n", keliling);
    printf("10 x 10 = %i \n", perkalian);
    printf("10 + 10 = %i \n", pertambahan);
    printf("10 - 10 = %i \n", pengurangan);
    printf("10 / 10 = %i \n", pembagian);
return 0;
}
