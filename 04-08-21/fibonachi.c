#include<stdio.h>

int main()
{
     int i ;
    int sum=0,a=1 ,b=1,result = 0;

    for (i = 1; i <= 10; i++)
    {   
        printf("%d\n",a);
        sum = a + b;
        a = b+1;
        b = sum;
       
    }
}
