/**
 * File: IF_ELSE_Contoh.c
 * Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com 
 * PROGRAM C UNTUK MENENTUKAN BILANGAN GANJIL GENAP
 */
#include <stdio.h>

int main()
{
    // inisialisasi variable
    int a;
    printf ("Contoh ganjil genap pada bilangan \n");
    printf("Masukkan bilangan : ");
    scanf("%d", &a); // input angka oleh pengguna
    
    // kondisi untuk memilih bilangan genap atau ganjil
    if (a %2==0){
        printf("Angka %d adalah bilangan GENAP \n", a);
        // %2==0 adalah kondisi dimana angka 2 kesamaan dari 0 (0 adalah bilangan genap)
    } else {
        printf("Angka %d adalah bilangan GANJIL \n", a);
        // Kondisi jika bukan bilangan genap maka program akan memilih bilangan ganjil
    }
    
	return 0;
}