#include<stdio.h>


int main(int argc, char const *argv[])
{
    int n,i,toplam = 0;
    int rakam;
    float avg = 0;

    printf("kac tane sayi gireceksiniz: ");
    scanf("%d",&n);
    printf("\ngirilecek sayi adedi: %d",n);

    for ( i = 1; i <= n ; i++)
    {
        printf("\nlutefen sayilari giriniz: ");
        scanf("%d",&rakam);

        toplam = toplam + rakam;
        
    }
    
     printf("toplam: %d",toplam);   
    avg = toplam / n;
    printf("\navg: %0.01f",avg);
    
}
