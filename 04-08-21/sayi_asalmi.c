#include <stdio.h>

int main(int argc, char const *argv[])
{
    int s1,kalan = 0,i;

    printf("bir tam sayi giriniz",s1);
    scanf("%d",&s1);

    for (int i = 2; i <= s1/2; i++)
    {
        if (s1 % i == 0)
        {
            kalan = 1;
            break;
        }
    }
    if(kalan == 0)
    {
        printf("sayi asaldir\n");
    }
    else
    {
        printf("sayi asaldegildir\n");
    }
}