#include <stdio.h>
#include <conio.h>

int main()
{
    int bil[7];
    for (int i=0; i<7; i++)
    {
        //printf("Elemen ke %i is %d  \talamat is %x\n", i, bil[i], %bil[i]);
        printf("Elemen ke %i ", i);
        printf("= %d ", bil[i]);
        printf("\tAlamatnya : %x \n", &bil[i]);

    }
    getch();
    return 0;
}
