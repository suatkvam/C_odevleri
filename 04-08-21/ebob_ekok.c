#include <stdio.h>
 
main()
{
    int s1,s2;
    int ebob;
    int ekok;
    int i; 
    printf("1.sayiyi giriniz: ");
    scanf("%d",&s1);
    printf("2.sayiyi giriniz: ");
    scanf("%d",&s2);
     
    for(i = 1; i < s1 && i < s2; i++)
    {
        if(s1 % i == 0 && s2 % i == 0)
        { 
            printf("ortak bolenler = %d\n",i);
            ebob = i;
        }
    }
    ekok = (s1 * s2) / ebob;
    printf("\nsayilarin ekoku = %d",ekok);
    printf("\nsayilarin ebobu = %d",ebob);
}
