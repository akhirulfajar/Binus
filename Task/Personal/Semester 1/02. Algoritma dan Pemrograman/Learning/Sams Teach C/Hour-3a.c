#include <stdio.h>

int kalikan_tujuh (int x)
{
    int hasil;
    hasil = x * 17;
    return hasil;
}


int main()
{
    int angka;
    
    angka = kalikan_tujuh(37);
    printf("Hasil dari 37 dikalikan  tujuh adalah %d. \n", angka);
    
}