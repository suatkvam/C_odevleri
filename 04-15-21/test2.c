#include <stdio.h>

int main(int argc, char const *argv[])
{

    int b;
    int f = 550;

    b = (f / 10) % 10; // bölümün modunu alıyor

    printf("\tb: %d", b);
}
