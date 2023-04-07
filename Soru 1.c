#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2, count = 0; 
    
    printf("Lutfen iki pozitif tam sayi girin: "); //Kullan�c�dan veri istenir
    scanf("%d %d", &num1, &num2); // veriler ekrana yazd�r�l�r 

    while (num1 > 0 && num2 > 0) {  // num1 veya num2 s�f�r olana kadar devam eder
        if (num1 >= num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        count++;  // her bir i�lem ad�m� i�in sayac� artt�r
    }

    printf("Toplam islem adedi: %d\n", count); //Toplam i�lem adedi ekrana yazd�r�r
    
    return 0;
}
