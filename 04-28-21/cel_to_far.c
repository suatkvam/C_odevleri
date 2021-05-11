#include<stdio.h>

double cel_to_far(double C)
{
    double sabit1 = 1.8;
    int sabit2 = 32;
    int farhenit = (C * sabit1) + sabit2;
    return farhenit;
}

int main(int argc, char const *argv[])
{
    double C;
    printf("C giriniz: ");
    scanf("%lf",&C);
    double c = cel_to_far(C);
    printf("%0.2lf F",c);
}

