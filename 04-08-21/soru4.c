#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int carp = 1;
    int i;
    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        // for(k= 0;k <= i;k++)
        // {
        if (i % 2 != 0)
        {
             printf("tek sayilar\n");
             printf("%d\n",i);
        }
            
         else 
         {
             carp = i*carp;
         }
    }
        
    
       
       
    
   

    printf("ciftlerin carpımı: %d",carp);
    
}
