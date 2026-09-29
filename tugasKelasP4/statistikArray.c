
#include <stdio.h>

int main() {

    float bufferTegangan[5] = {219.8, 220.1, 220.5, 219.9, 220.2};
    float max = bufferTegangan[0];
    float min = bufferTegangan[0];
    float jumlah, rataRata;

    // Mencari nilai maksimum
    if (bufferTegangan[0] > max) max = bufferTegangan[0];
    if (bufferTegangan[1] > max) max = bufferTegangan[1];
    if (bufferTegangan[2] > max) max = bufferTegangan[2];
    if (bufferTegangan[3] > max) max = bufferTegangan[3];
    if (bufferTegangan[4] > max) max = bufferTegangan[4];

    // Mencari nilai minimum
    if (bufferTegangan[0] < min) min = bufferTegangan[0];
    if (bufferTegangan[1] < min) min = bufferTegangan[1];
    if (bufferTegangan[2] < min) min = bufferTegangan[2];
    if (bufferTegangan[3] < min) min = bufferTegangan[3];
    if (bufferTegangan[4] < min) min = bufferTegangan[4];

    // Menghitung jumlah seluruh sampel
    jumlah = bufferTegangan[0] + bufferTegangan[1]
           + bufferTegangan[2] + bufferTegangan[3]
           + bufferTegangan[4];

    // Menghitung rata-rata
    rataRata = jumlah / 5;

    // Menampilkan hasil
    printf("Nilai Maksimum : %.2f V\n", max);
    printf("Nilai Minimum  : %.2f V\n", min);
    printf("Nilai Rata-rata: %.2f V\n", rataRata);

    return 0;
}