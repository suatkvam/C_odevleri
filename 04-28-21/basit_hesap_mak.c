#include <stdio.h>

int Toplam(int x, int y)
{
    return x + y;
}
int Cikarma(int x, int y)
{
    return x - y;
}
double div(double a, double b)
{
    double a, b;
    if (b == 0)
    {
        printf("Bir rakam sifira bolunemez cunku tanimsiz");
    }
    return a / b;
}
double min(double a, double b)
{
    return a * b;
}

int main(int argc, char const *argv[])
{
    int secim;
    printf("bu kod basit bir hesap makinesidir \n");
    printf("iki rakamin toplami icin 1'i seciniz ");
    printf("cikarma islemi icin 2yi");
    printf("bolme islemi icin 3u  ");
    printf("carpma islemi icin 4u ");

    int a, b;

    if (secim == 1)
    {
        printf("birinci degeri giriniz");
        scanf("%d", &a);
        printf("ikinci degeri giriniz");
        scanf("%d", &b);

        int toplam = Toplam(a, b);
        printf("islemin sonucu: %d", toplam);
    }
    else if(secim == 2)
    {
         printf("birinci degeri giriniz");
        scanf("%d", &a);
        printf("ikinci degeri giriniz");
        scanf("%d", &b);

        int cikarma = Cikarma(a, b);
        printf("islemin sonucu: %d", cikarma);
    }
    else if(secim == 3)
    {
         printf("birinci degeri giriniz");
        scanf("%d", &a);
        printf("ikinci degeri giriniz");
        scanf("%d", &b);

        int bolme = div(a, b);
        printf("islemin sonucu: %d", bolme);
    }
    else if(secim == 4)
    {
         printf("birinci degeri giriniz");
        scanf("%d", &a);
        printf("ikinci degeri giriniz");
        scanf("%d", &b);

        int carpma = min(a, b);
        printf("islemin sonucu: %d",carpma);
    }
}
