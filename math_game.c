#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int rnd_number1,rnd_number2;

int create(int N1,int N2)
{
      
    srand(time(NULL));
    rnd_number1 = rand() % N1; // it will be created random number 0 between as much as N variable
    rnd_number2 = rand() % N2;

}

int main(int argc, char const *argv[])
{   
    

    char _operator;
    int result;
    int answer;
    int score = 1;
    int run = 1;
    char approval;
    int true_ = 0;
    int false_ = 0;
   
     

        while(run)
        {
           control:
           {

            if( score < 1 || score == 100)

                {
                    run = 0;
                    printf("your true question: %d\n",true_);
                    printf("your false question: %d\n",false_);
                    printf("and your score: %d",score);
                    break;
                }
                else
                {
                    goto question;
                }
            }
            question:
            {
            int N1 = 100;
            int N2 = 100;
            create(N1,N2);
            
            printf("please enter the control operaton(+,-,*,/): ");
            scanf("%s",&_operator);

            }
                switch (_operator)
                {
                case '+':
                    {
                        result = rnd_number1 + rnd_number2;
                        printf("number1: %d + number2 : %d \n",rnd_number1,rnd_number2);
                        // printf("%d \n",result);
                        printf("answer: ");
                        scanf("%d",&answer);

                        if (result == answer)
                        {
                            printf("answer is correct\n");
                            printf("you get the 5 point\n");
                            score+=5;
                            true_++;
                            printf("Do you want to contine or it will exit (y/n)");
                            scanf("%s",&approval);
                            if( approval == 'n' || approval == 'N')
                            {
                                run = 0;
                                break;
                            }
                            else if( approval == 'y' || approval == 'Y')
                            {
                                goto control;
                            }
                            
                        }
                        else
                        {
                            printf("answer is wrong\n");
                            printf("you lose the 5 point\n");
                            score-=5;
                            false_--;
                            printf("Do you want to contine or it will exit (y/n)");
                            scanf("%s",&approval);

                           if( approval == 'n' || approval == 'N')

                            {
                                run = 0;
                                goto control;
                            }
                            else if(( approval == 'y' || approval == 'Y'))
                            {
                                goto control;
                            }
                            
                        }
                        
                    }
                    
                    case '-':
                        {
                            result = rnd_number1 - rnd_number2;
                            printf("number1: %d - number2 : %d \n",rnd_number1,rnd_number2);
                            // printf("%d \n",result);
                            printf("answer: ");
                            scanf("%d",&answer);

                            if (result == answer)
                            {
                                printf("answer is correct\n");
                                printf("you get the 5 point\n");
                                score+=5;
                                true_++;
                                scanf("%s",&approval);
                               if( approval == 'n' || approval == 'N')

                                {
                                    run = 0;
                                    break;
                                }
                                else if(( approval == 'y' || approval == 'Y'))
                                {
                                    goto control;
                                }
                                
                            }
                            else
                            {
                                printf("answer is wrong\n");
                                printf("you lose the 5 point\n");
                                score-=5;
                                false_--;
                                scanf("%s",&approval);
                               if( approval == 'n' || approval == 'N')

                                {
                                    run = 0;
                                    break;
                                }
                                else if(( approval == 'y' || approval == 'Y'))
                                {
                                    goto control;
                                }
                                
                            }  
                        }
                
                    case '*':
                        {
                        result = rnd_number1 * rnd_number2;
                        printf("number1: %d x number2 : %d \n",rnd_number1,rnd_number2);
                        // printf("%d \n",result);
                        printf("answer: ");
                        scanf("%d",&answer);

                        if (result == answer)
                        {
                            printf("answer is correct\n");
                            printf("you get the 5 point\n");
                            score+=5;
                            true_++;
                            scanf("%s",&approval);
                            if( approval == 'n' || approval == 'N')

                            {
                                run = 0;
                                break;
                            }
                            else if(( approval == 'y' || approval == 'Y'))
                            {
                                goto control;
                            }

                            
                        }
                        else
                        {
                            printf("answer is wrong\n");
                            printf("you lose the 5 point\n");
                            score-=5;
                            false_--;
                            scanf("%s",&approval);
                           if( approval == 'n' || approval == 'N')

                            {
                                run = 0;
                                break;
                            }
                            else if(( approval == 'y' || approval == 'Y'))
                            {
                                goto control;
                            }

                            
                        }
                        }
                        
                    case '/':
                        {
                            result = rnd_number1 / rnd_number2;
                            printf("number1: %d / number2 : %d \n",rnd_number1,rnd_number2);
                            // printf("%d \n",result);
                            printf("answer: ");
                            scanf("%d",&answer);
                            

                            if (result == answer)
                            {
                                printf("answer is correct\n");
                                printf("you get the 5 point\n");
                                score+=5;
                                true_++;
                                scanf("%s",&approval);
                              if( approval == 'n' || approval == 'N')

                                {
                                    run = 0;
                                    break;
                                }
                                else if(( approval == 'y' || approval == 'Y'))
                                {
                                    goto control;
                                }
                                
                            }
                            else
                            {
                                printf("answer is wrong\n");
                                printf("you lose the 5 point\n");
                                score-=5;
                                false_--;
                                scanf("%s",&approval);
                                if( approval == 'n' || approval == 'N')

                                {
                                    run = 0;
                                    break;
                                }
                                else if(( approval == 'y' || approval == 'Y'))
                                {
                                    goto control;
                                }
                                
                            }
                        }    
                }
        }   
}