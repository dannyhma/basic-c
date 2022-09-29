#include <stdio.h>

int main()
{//** kamus
    int i, j;
    int x=3;
    int y=10;

    for(i=1; i<y; ++i)
    {
        if(i%3 == 0) {
            printf("|");
        }
        else {
            printf("-");
        }
    }
    printf("\n");
    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            printf("Perulangan ke-(%d,%d) \n", i, j);
        }
    }     
    return 0;
}