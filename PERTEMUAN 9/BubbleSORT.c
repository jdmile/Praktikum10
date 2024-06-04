#include <stdio.h>

// Prosedur Bubble Sort untuk urutan menurun (descending)
void BubbleSort(int T[], int N) {
    // Deklarasi variabel lokal
    int i, K, Temp;

    // Algoritma
    for (i = 0; i < N-1; i++) {
        for (K = 0; K < N-1-i; K++) {
            if (T[K] < T[K + 1]) {
                // Menukar elemen jika elemen yang sekarang lebih kecil dari elemen berikutnya
                Temp = T[K];
                T[K] = T[K + 1];
                T[K + 1] = Temp;
            }
        }
    }
}

int main() {
    int T[] = {64, 34, 25, 12, 22, 11, 90};
    int N = sizeof(T) / sizeof(T[0]);

    // Menampilkan array sebelum diurutkan
    printf("Array sebelum diurutkan: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    // Memanggil prosedur BubbleSort
    BubbleSort(T, N);

    // Menampilkan array setelah diurutkan
    printf("Array setelah diurutkan: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
