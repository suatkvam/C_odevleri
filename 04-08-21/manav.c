#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("                 MANAV\n");
    printf("->Domates: 2 TL'dir----->Almak icin 1 e basin\n");
    printf("->Havuc: 1 TLdir----->Almak icin 2 e basin\n");
    printf("->Marul: 3 TLdir----->Almak icin 3 e basin\n");

    int sec;
    int tutar,kg,fiyat;
	printf("secim yapiniz:");

    scanf("%d",&sec);

    switch(sec)
    {
            case 1:
        {
            
            printf("Kac kilo domates alacaksiniz:");
            scanf("%d",&kg);
            fiyat=2;
            tutar=kg*fiyat;
                printf("Toplam odenecek tutar:%d tl\n",tutar);
            
            break;
        }
            case 2:
        {
            printf("Kac kilo havuc alacaksiniz:");
            scanf("%d",&kg);
            fiyat=1;
            tutar=kg*fiyat;
                printf("Toplam odenecek tutar:%d tl\n",tutar);
            break;
        }
                case 3:
        {
            printf("Kac kilo marul alacaksiniz:");
            scanf("%d",&kg);
            fiyat=3;
            tutar=kg*fiyat;
                printf("Toplam odenecek tutar:%d tl\n",tutar);
                break;
        }
                    case 4:
        {
            printf("Kac kilo salatalýk alacaksiniz:");
            scanf("%d",&kg);
            fiyat=4;
            tutar=kg*fiyat;
            printf("Toplam odenecek tutar:%d tl\n",tutar);
                break;
        }
    }

}