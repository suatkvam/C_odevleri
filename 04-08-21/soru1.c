#include <stdio.h>

int main(int argc, char const *argv[])
{
    char cinsiyet;
    int boy;
    double ideal;
    
    printf("lütfen boyunuzu cm cinsinden giriniz: ");
    scanf("%d",&boy); 
    printf("lütfen cinsiyetinizi giriniz: ");
    scanf("%s",&cinsiyet);

    if (cinsiyet == 'E' || cinsiyet == 'e')
    {
        ideal = 50 + (2.3 / 2.54) * (boy - 152.4);
         printf("%d boyundaki bir erkeğin ideal kilosu: %0.01lf",boy,ideal);
    }
    else if (cinsiyet == 'K' || cinsiyet == 'k')
    {
        ideal = 45.5 + (2.3 / 2.54) * (boy - 152.4);
        printf("%d boyundaki bir kadının ideal kilosu: %0.01lf",boy,ideal);
    }
}
