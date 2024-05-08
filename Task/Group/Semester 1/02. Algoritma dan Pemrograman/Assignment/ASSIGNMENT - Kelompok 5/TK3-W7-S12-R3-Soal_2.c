#include <stdio.h>
#include <string.h>

// Struktur data untuk informasi pegawai
struct Pegawai {
    char nip[20];
    char nama[50];
    char alamat[100];
    char no_hp[15];
    char jabatan[50];
    char golongan[3];
    float gaji;
};

// Fungsi untuk menghitung gaji bulanan berdasarkan golongan dan jumlah jam lembur
float hitungGajiBulanan(struct Pegawai pegawai, int jam_lembur) {
    float gaji_pokok;
    float lemburan;
    float total_gaji;

    // Tentukan gaji pokok berdasarkan golongan
    if (strcmp(pegawai.golongan, "D1") == 0) {
        gaji_pokok = 2500000; // Golongan D1
        lemburan = 10000; // Lemburan perjam
    } else if (strcmp(pegawai.golongan, "D2") == 0) {
        gaji_pokok = 2000000; // Golongan D2
        lemburan = 5000; // Lemburan perjam
    } else if (strcmp(pegawai.golongan, "D3") == 0) {
        gaji_pokok = 1500000; // Golongan D3
        lemburan = 2500; // Lemburan perjam
    } else {
        printf("Golongan tidak valid.\n");
        return 0;
    }

    // Hitung total gaji bulanan
    total_gaji = gaji_pokok + (jam_lembur * lemburan);

    return total_gaji;
}

int main() {
    struct Pegawai pegawai;
    int jam_lembur;

    // Input informasi pegawai
    printf("Input 1:\n");
    printf("NIP = ");
    scanf("%s", pegawai.nip);
    printf("Nama = ");
    scanf(" %[^\n]s", pegawai.nama);
    printf("Alamat = ");
    scanf(" %[^\n]s", pegawai.alamat);
    printf("No HP = ");
    scanf("%s", pegawai.no_hp);
    printf("Jabatan = ");
    scanf(" %[^\n]s", pegawai.jabatan);
    printf("Golongan = ");
    scanf("%s", pegawai.golongan);

    // Menampilkan gaji pokok berdasarkan golongan
    printf("Gaji = ");
    if (strcmp(pegawai.golongan, "D1") == 0) {
        printf("Rp2.500.000\n"); // Golongan D1
    } else if (strcmp(pegawai.golongan, "D2") == 0) {
        printf("Rp2.000.000\n"); // Golongan D2
    } else if (strcmp(pegawai.golongan, "D3") == 0) {
        printf("Rp1.500.000\n"); // Golongan D3
    } else {
        printf("Golongan tidak valid.\n");
        return 0;
    }

    // Input jumlah jam lembur
    printf("\nInput 2:\n");
    printf("NIP = %s\n", pegawai.nip);
    printf("Golongan = %s\n", pegawai.golongan);
    printf("Jumlah jam lembur = ");
    scanf("%d", &jam_lembur);

    // Hitung total gaji bulanan
    float total_gaji = hitungGajiBulanan(pegawai, jam_lembur);

    // Menampilkan total gaji bulanan
    printf("Total Gaji Bulan ini = Rp%.2f\n", total_gaji);

    return 0;
}
