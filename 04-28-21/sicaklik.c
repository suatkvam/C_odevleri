#include<stdio.h>

double farh_to_cels(double F)
{
 double sabit1 = 1.8000;
 double sabit2 = 32;

 double celcius = (F - sabit2) / sabit1;
 return celcius;

}

double cel_to_far(double C)
{
    double sabit1 = 1.8;
    int sabit2 = 32;
    int farhenit = (C * sabit1) + sabit2;
    return farhenit;
}

int main(int argc, char const *argv[])
{

    printf("lütfen donusturmek istediniz sicakligi giriniz(c ya da f) ");
    char secim;
    scanf("%s",&secim);

    if (secim == 'F' || secim == 'f')
    {
        printf("farhenitan celcius'a donusturulecek\n");
        
        double F;
        printf("deger giriniz: ");
        scanf("%lf",&F);
        double f = farh_to_cels(F);
        printf("%0.04lf celcius",f);
    }
    else if (secim == 'c' || secim == 'C')
    {
        printf("celciustan farhenite donusturulecek\n");

        double C;
        printf("deger giriniz: ");
        scanf("%lf",&C);
        double c = cel_to_far(C);
        printf("%0.2lf farhenite",c);
    }   
}