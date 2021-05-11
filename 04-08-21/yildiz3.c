#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int i,j,k,l;

    for(i=1; i<=5;i++)
    {
       for (j = 0; j<i ; j++)
       {
            printf("*");
       }
         printf("\n");  
    }

    for(k=5; k>=1;--k)
    {
       for (l = 1; l<=k ; ++l)
       {
            printf("*");
       }
         printf("\n");  
    }
   
}
