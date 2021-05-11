#include <stdio.h>
int main(int argc, char const *argv[])
{
    int mod;
    int i;
    for (i = 0; i < 50; i++)
    {
        mod=i%2;
        printf("%d\n",mod);
    }
    
}