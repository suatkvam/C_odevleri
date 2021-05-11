#include<stdio.h>

/*
1-girilen sayinin kaç basamak olduğunu bulsun
2-hesap makinesini fonksiyon kullanarak yapiniz.
3-fahrenaytı dereceye cevir //float ya da double kullanarak
*/
double farh_to_cels(double F)
{
 double sabit1 = 1.8000;
 double sabit2 = 32;

 double celcius = (F - sabit2) / sabit1;
 return celcius;


}
// |
int main(int argc, char const *argv[])
{
    double F;
    printf("f giriniz: ");
    scanf("%lf",&F);
    double f = farh_to_cels(F);
    printf("%0.04lf celcius",f);
}

