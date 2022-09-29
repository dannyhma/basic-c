/* File: for_contoh_scanf.c */
/* Penulis : Danny Himawan, Email : hackinganonymouse2@gmail.com */
/* Deskripsi :   
1. Ubahlah teks program di atas sehingga mengulang untuk menuliskan teks 
“Saya senang belajar bahasa C” sebanyak 1000 kali.
2. Tuliskan sebuah program yang dapat mengulang menuliskan 
“Saya senang belajar bahasa C” sebanyak N kali, dengan nilai N yang akan ditentukan dari deklarasinya.
3. Tuliskan sebuah program yang dapat mengulang menuliskan 
“Saya senang belajar bahasa C” sebanyak N kali, dengan nilai N yang akan dibaca dengan scanf. */
#include <stdio.h>
 
int main()
{
    int n;
    printf("Tulis : ");
    scanf("%d", &n);

    for(n=0; n<11; n++)
    {
        printf("Saya senang belajar bahasa C : %d \n", n);
    }
    return 0;
}