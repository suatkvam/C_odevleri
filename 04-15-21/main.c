#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int a,b,c;
    int same = 0;
    int dif = 0;
    
    for (i = 100; i <= 999; i++)
    {
        // % mod işareti
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        
        if (a == b && a == c && b == c)
        {   
            
            same ++;
        }
        else if (a != b && a != c &&  b != c)
        {   
         
            dif ++;
        }
        
    }
    
    printf("ayni olanlarin adedi: %d\n",same);
    printf("farkli olanlarin adedi: %d",dif);
}
