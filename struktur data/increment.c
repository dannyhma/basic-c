#include <stdio.h>

int main()
{//** Kamus
    int z;
        for(z=1; z<=10; z++)
    {
        printf("z = %d \n", z);
    }
    /* Post-Increment */
    /* i++ = eksekusi kode dibaris ini terlebih dahulu (baris yang ada i++), baru nilai i ditambah 1 */
    /* i++ = Tampilkan nilai i, lalu tambah i sebanyak 1 angka */
    int u = 0;
    printf("u = %d \n", u++);
    printf("u = %d", u);
    printf("\n");  

    /* Pre-Increment */
    /* ++i = nilai i ditambah 1 dulu, baru eksekusi kode dibaris ini (baris yang ada ++i) */
    /* ++i = Tambah i sebanyak 1 angka, lalu tampilkan hasilnya */
    int v = 0;
    printf("v = %d \n", ++v);
    printf("v = %d", v);

    return 0;
}

/* Mari kita jabarkan:
Penulisan simbol ++ di dibelakang vairbel disebut dengan post-incement (i++), 
sedangkan bila ditulis di depan, disebut dengan pre-increment(++i).

Simbol ++ sebenarnya bentuk singkatan dari sebuah ekspersi:
i++ merupakan singkatan dari i += 1 atau i = i + 1.
++i merupakan singkatan dari i += 1 atau i = 1 + i.

post-increment: a = i++ itu sama seperti a = i; i = i + 1;.
pre-increment: a = ++i itu sama seperti i = 1 + i; a = i;.
Pada post-increment, variabel a akan mengambil nilai i lalu variabel i ditambah 1. 
Sedangkan pada pre-increment variabel i akan ditambah satu terlebihdahulu, kemudian diisi ke variabel a.

Kesimpulan
Jadi posisi simbol ++ menentukan kapan nilai variabel akan ditambah.
Bila ditulis di depan, maka akan ditambah dulu. Sedangkan bila ditulis di belakang akan ditambah belakangan.
Selain simbol ++ ada juga simbol -- untuk mengurangi. */

/* ++i = nilai i ditambah 1 dulu, baru eksekusi kode dibaris ini */
/* i++ = eksekusi kode dibaris ini terlebih dahulu, baru nilai i ditambah 1 */
