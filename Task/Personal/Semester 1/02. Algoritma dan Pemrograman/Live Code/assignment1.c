#include <stdio.h>

int main() {
    float jarakKm, jarakMeter, jarakCm;

    printf("Masukkan jarak dalam kilometer: ");
    scanf("%f", &jarakKm);

    // Konversi ke meter dan sentimeter
    jarakMeter = jarakKm * 1000;
    jarakCm = jarakKm * 100000;
    
    printf("\nKonversi jarak:\n");
    printf("Jarak dalam meter: %.2f m\n", jarakMeter);
    printf("Jarak dalam sentimeter: %.2f cm\n", jarakCm);

    // Menunggu Enter sebelum program berakhir
    printf("\nTekan Enter untuk melanjutkan...");
    while (getchar() != '\n');
    getchar();  // Menunggu Enter ditekan

    return 0;
}
