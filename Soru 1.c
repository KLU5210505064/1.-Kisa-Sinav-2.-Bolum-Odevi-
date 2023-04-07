#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2, count = 0; 
    
    printf("Lutfen iki pozitif tam sayi girin: "); //Kullanýcýdan veri istenir
    scanf("%d %d", &num1, &num2); // veriler ekrana yazdýrýlýr 

    while (num1 > 0 && num2 > 0) {  // num1 veya num2 sýfýr olana kadar devam eder
        if (num1 >= num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        count++;  // her bir iþlem adýmý için sayacý arttýr
    }

    printf("Toplam islem adedi: %d\n", count); //Toplam iþlem adedi ekrana yazdýrýr
    
    return 0;
}
