#include<stdio.h>



int main(int argc, char const *argv[])
{
    int etk_fiyati =100;
    char ürün_tür;
    int Tek_kdv = 18;
    int kdv = 8;

    printf("alinacak ürünün türünü giriniz: ürün teknolojik ise t değil ise i ye basınız");
    scanf("%s",&ürün_tür);

    if(ürün_tür == 't')
    {
        double fiyat;
        fiyat = etk_fiyati + Tek_kdv;
        printf("%0.01lf",fiyat);
    }

    if(ürün_tür == 'i')
    {
        double fiyat;
        fiyat = etk_fiyati + kdv;
        printf("%0.01lf",fiyat);
    }

}

