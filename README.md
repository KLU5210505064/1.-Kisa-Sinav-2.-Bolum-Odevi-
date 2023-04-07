# 1.-Kisa-Sinav-2.-Bolum-Odevi-

SORU 1 AÇIKLAMA:
Algoritmanın Amacı: n x n boyutunda ikili, kare matrisler olarak temsil edilen iki görüntüden birinin tüm 1 bitlerini sola, sağa, aşağı, yukarı ve/veya aşağı doğru  istenilen sayıda birim kaydırarak ikinci görüntüye en çok uyacak  şekile sokmaktır.

Çalışma Şekli: img1 ve img 2 olarak iki değişken tanımlanır. İlk olarak 'calculate_diff' fonksiyonu ile iki matris arasındaki farkı hesaplarız. ' Calculate_sum' fonksiyonu ile iki matris arasındaki farkın toplamı hesaplanır. En uygun kaydırma yönünü bulabilmek için 4 farklı matris tanımlanır( left_sum, rıght_sum, up_sum, down_sum) Sol yönde, sağ yönde, aşağı yönde, yukarı yönde kaydırma yapılır. En iyi kaydırma yönü fark matrisiinin toplamının en düşük olanıdır. En uygun kaydırma yönüne göre img1 kaydırılır. İki matris arasındaki en iyi eşleşme bulunur.




SORU 2 AÇIKLAMA:
Algoritmanın Amacı: Girilen iki negatif olmayan tamsayıyı num1=0 veya num1=0 Sıfırı Bulana kadar işleme sokmaktır. 

Bu Algoritma Ne İçin Kullanılır: Kullanıcıdan istenilen negatif olmayan iki tamsayının sıfıra kadar kaç işlem yapıldığını öğrenebilmek için kullanılır.

Çalışma Şekli: Öncelikle gerekli kütüphaneler çağrılır. num1 ve num2 adında iki int değişkeni tanımlanır. Her bir işlem adımı 'count' değişkeni olarak tanımlanır. Kullanıcıdan printf  fonksiyonu ile iki tamsayı değeri girilmesi istenir. Veriler ekrana yazdırılır. While döngüsü ile num1 ve num2 değerleri sıfır olana kadar devam edecek işlem satırları girilir, olası durumlar hesaplanır. 'count++;' işlemi ile her bir işlem adımıyla sayaç artırır. Printf fonksiyonu ile 'Toplam işlem adedi' ve 'işlem adım sayısı(count)' ekrana yazdırılır. Program sonlandırılır.(Return 0;)
