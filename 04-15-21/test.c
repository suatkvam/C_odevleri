#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int a,b,c;
    int f = 50;
    for (i = 50; i <=100 ; i++)
    {
        a = i / 100;
        b = (i / 10) % 10;// bölümün modunu alıyor
        c = i % 10;
        printf("f:%d\n",f);
        printf("a: %d",a );
        printf("\tb: %d",b );
        printf("\tc: %d\n",c);
        f++;
         
}
return 1;
    }
   
