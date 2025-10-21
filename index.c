#include <stdio.h>

int main() {
    int n; // Variabel untuk menyimpan jumlah baris
    int i, j; // Variabel untuk iterasi loop
    int totalBintang = 0; // <-- TAMBAHAN: Variabel untuk menghitung total bintang

    // 1. Meminta masukan dari pengguna
    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    // Memberi satu baris baru agar output rapi
    printf("\n");

    // 2. Loop luar (Outer loop) untuk mengontrol BARIS
    for (i = 1; i <= n; i++) {
        
        // 3. Loop dalam (Inner loop) untuk mengontrol KOLOM (bintang)
        for (j = 1; j <= i; j++) {
            printf("*");
            totalBintang++; // <-- TAMBAHAN: Tambah 1 ke total setiap bintang dicetak
        }
        
        // 4. Pindah ke baris baru
        printf("\n");
    }

    // 5. <-- TAMBAHAN: Cetak total bintang setelah semua loop selesai
    printf("\nJumlah total bintang: %d\n", totalBintang);

    return 0;
}