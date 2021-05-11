#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int toplam = 0;
    int i;
    printf("1den n'e kadar olan sayıların toplamı");
    printf("lütfen bir sayi giriniz: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
         if (i % 2 != 0)
        {
             printf("tek sayilar\n");
             printf("%d\n",i);
        }
            
         else 
         {
            toplam = toplam + i;
         }
    }    
    printf("toplam: %d",toplam );
    
}
