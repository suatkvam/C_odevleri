#include <stdio.h>

int main()
{
    int s, bs = 1;
    printf("Bir sayi giriniz: "); // max 10 basamağa kadar bulur
    scanf("%d", &s);

    do
    {
        s = s / 10; // basamak değeri burada bulunuyor
         // mod alınca basamaak değeri gelir
        bs++;
    } while (s >= 10);
    printf("Basamak sayisi= %d", bs);
}
