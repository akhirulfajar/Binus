#include <stdio.h>
#include <string.h>

int main() {
    char kalimat1[100], kalimat2[100], kalimat3[100], gabungan[300], balikGabungan[300];

    printf("Kalimat 1 = ");
    scanf("%s", kalimat1);

    printf("Kalimat 2 = ");
    scanf("%s", kalimat2);

    printf("Kalimat 3 = ");
    scanf("%s", kalimat3);

    strcpy(gabungan, kalimat1);
    strcat(gabungan, " ");
    strcat(gabungan, kalimat2);
    strcat(gabungan, " ");
    strcat(gabungan, kalimat3);

    strcpy(balikGabungan, gabungan);
    strrev(balikGabungan);

    int jumlahHuruf1 = strlen(kalimat1);
    int jumlahHuruf2 = strlen(kalimat2);
    int jumlahHuruf3 = strlen(kalimat3);
    int totalHuruf = jumlahHuruf1 + jumlahHuruf2 + jumlahHuruf3;

    printf("Gabungan 3 buah inputan kalimat = %s\n", gabungan);
    printf("Hasil membalik kalimat gabungan = %s\n", balikGabungan);
    printf("Jumlah Huruf kalimat pertama = %d\n", jumlahHuruf1);
    printf("Jumlah Huruf kalimat kedua = %d\n", jumlahHuruf2);
    printf("Jumlah Huruf kalimat ketiga = %d\n", jumlahHuruf3);
    printf("Total Jumlah huruf = %d\n", totalHuruf);

    return 0;
}
