#include<stdio.h>

int main(int argc, char const *argv[])
{
    int yas;
    char onay = 'e';
    do
    { 

        if(onay != 'e')
        {
            printf("e yada h giriniz: ");
            scanf("%s",onay);
        }
        
        else
        {
            printf("lütfen yasinizi giriniz: ");
            scanf("%d",&yas);

            if( yas < 18)
            {
                printf("18 yas alti ehliyet alamaz");

                printf("sorguya devam etmek için e iptal için h tusuna basiniz");
                printf("\n onay:");
                scanf("%s",onay);
            }
            else if( yas == 40)
            {
                printf("yasin %d oldu icin en yakin ehliyet kursuna gidiniz",yas);

                printf("sorguya devam etmek için e iptal için h tusuna basiniz");
                printf("\n onay:");
                scanf("%s",onay);
            }
            else if(yas >= 65)
            {
                printf("65 ve üzeri ehiyet alamaz");

                printf("sorguya devam etmek için e iptal için h tusuna basiniz");
                printf("\n onay:");
                scanf("%s",onay);
            }
        }
    } while (onay != 'h');
    printf("sorgu bitmiştir");
    
}
