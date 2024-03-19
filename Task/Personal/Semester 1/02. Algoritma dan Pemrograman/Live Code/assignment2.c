#include <stdio.h>

int main() {
    float total_belanja, diskon, total_bayar;
    int jumlah_pembelian;

    // Meminta input total belanja
    printf("Masukkan total belanja: Rp ");
    scanf("%f", &total_belanja);

    // Meminta input jumlah pembelian dalam sebulan
    printf("Masukkan jumlah pembelian dalam sebulan: ");
    scanf("%d", &jumlah_pembelian);

    // Menghitung diskon berdasarkan total belanja
    if (total_belanja < 200000) {
        diskon = 0;  // Tidak ada diskon
    } else if (total_belanja >= 200000 && total_belanja <= 500000) {
        diskon = 0.1;  // Diskon 10%
    } else if (total_belanja > 500000 && total_belanja <= 1000000) {
        diskon = 0.2;  // Diskon 20%
    } else {
        diskon = 0.3;  // Diskon 30%
    }

    // Mengecek jumlah pembelian dalam sebulan untuk tambahan diskon
    if (jumlah_pembelian >= 4) {
        diskon += 0.2;  // Tambahan diskon 20% jika pembelian >= 4
    }

    // Menghitung total bayar setelah diskon
    total_bayar = total_belanja - (total_belanja * diskon);

    // Menampilkan hasil
    printf("\nTotal belanja: Rp %.2f\n", total_belanja);
    printf("Diskon: %.0f%%\n", diskon * 100);
    printf("Total bayar setelah diskon: Rp %.2f\n", total_bayar);

    return 0;
}
