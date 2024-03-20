#include <stdio.h>

int main() {
    int totalDetik, jam, menit, detik;

    printf("Masukkan total detik: ");
    scanf("%d", &totalDetik);

    jam = totalDetik / 3600;
    menit = (totalDetik % 3600) / 60;
    detik = totalDetik % 60;

    printf("Hasil Konversi => %d detik = %d jam, %d menit, %d detik\n", totalDetik, jam, menit, detik);

    return 0;
}
