#include <stdio.h>
#include <stdlib.h>

#define N 10

int img1[N][N], img2[N][N], diff[N][N];

// Fonksiyon, iki matris aras�ndaki fark� hesaplar.
void calculate_diff() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            diff[i][j] = abs(img1[i][j] - img2[i][j]);
        }
    }
}

// �ki matris aras�ndaki fark�n toplam�n� hesaplar.
int calculate_sum() {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            sum += diff[i][j];
        }
    }
    return sum;
}

int main() {
    // img1 ve img2 matrislerinin de�erleri burada atan�r.

    // En uygun kayd�rma y�n�n� bulmak i�in d�rt adet fark matrisi hesaplan�r.
    int left_sum, right_sum, up_sum, down_sum;

    // Sol y�nde kayd�rma yap�l�r.
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j > 0) {
                img1[i][j-1] = img1[i][j];
            }
        }
        calculate_diff();
        left_sum = calculate_sum();
    }

    // Benzer �ekilde, di�er �� y�nde kayd�rma yap�l�r.
    // En iyi kayd�rma y�n�, fark matrisinin toplam�n� en d���k olan�d�r.
    // En uygun kayd�rma y�n�ne g�re img1 kayd�r�l�r.

    // �ki matris aras�ndaki en iyi e�le�me bulunur.

    return 0;
}

