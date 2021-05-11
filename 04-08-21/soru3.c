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

            if( yas <= 20)
            {
                printf("20 yas ve altinda disari cikama yasagi var");

                printf("sorguya devam etmek için e iptal için h tusuna basiniz");
                printf("\n onay:");
                scanf("%s",onay);
            }
            else if( yas >= 65)
            {
                printf("yasin %d ya da 65 den buyuk oldugu disari cikamazsin",yas);

                printf("sorguya devam etmek için e iptal için h tusuna basiniz");
                printf("\n onay:");
                scanf("%s",onay);
            }
            else
            {
                printf("yasin %d, oldugu için maske takarak ve mesafeye dikkat ederek disari cikabilirsin",yas);

                printf("sorguya devam etmek için e iptal için h tusuna basiniz");
                printf("\n onay:");
                scanf("%s",onay);
            }
        }
    } while (onay != 'h');
    printf("sorgu bitmiştir");
    
}
