#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


void guess(int N)
{
    int rnd_number;
    int guess;
    int guessForNumber = 0;
    
    srand(time(NULL));
    rnd_number = rand() % N;   
    printf("guess a number betwen 0 %d \n ",N);
    printf("lets get started :devilsmile \n");

    do
    {
        scanf("%d",&guess);
            
        if(guess == rnd_number && guessForNumber >= 3)
        {
            printf("finaly you find the correct number !!! \n");
            printf("%d",guessForNumber);
            break;
        }  
        else if (guess == rnd_number)
        {
            printf("you are briliant !!! find the first attempts ");
            break;
        }
        else if (guess > 100)
        {
            printf("we don't want to cheat !!!!!!!!!!");
            break;   
        }
        
        else if (guess < 0)
        {
            printf("we don't want to cheat !!!!!!!!!!");
            break;   
        }
        
        
        if(guess > rnd_number)
        {
            printf("lower number pls !!!\n");
            guessForNumber ++;

        }
        else if(guess < rnd_number)
        {
            printf("higher number pls !!!\n");
            guessForNumber ++;
        }

    }while(guess != rnd_number );

}

int main(int argc, char const *argv[])
{
    int N = 100;

    guess(N);
}
