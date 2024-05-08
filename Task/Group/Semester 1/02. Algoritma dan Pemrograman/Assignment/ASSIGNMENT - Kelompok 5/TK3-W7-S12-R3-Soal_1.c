#include <stdio.h>

int main() {
    float total_pembelian;
    int jumlah_kupon = 0;
    float diskon = 0;
    float pembayaran;

    printf("Masukkan total pembelian: Rp. ");
    scanf("%f", &total_pembelian);

    // Memeriksa apakah total pembelian memenuhi syarat untuk mendapatkan kupon undian dan diskon
    if (total_pembelian >= 100000) {
        jumlah_kupon = total_pembelian / 100000; // Jumlah kupon dihitung berdasarkan kelipatan 100.000
        diskon = total_pembelian * 0.05; // Diskon sebesar 5%
        pembayaran = total_pembelian - diskon; // Total pembayaran setelah diskon
    } else {
        pembayaran = total_pembelian; // Jika total pembelian kurang dari Rp. 100.000, tidak ada kupon undian atau diskon
    }

    printf("Total pembelian: Rp. %.2f\n", total_pembelian);
    printf("Jumlah kupon undian: %d lembar\n", jumlah_kupon);
    printf("Diskon: Rp. %.2f\n", diskon);
    printf("Total pembayaran setelah diskon: Rp. %.2f\n", pembayaran);

    return 0;
}

