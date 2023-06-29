#include <stdio.h>
#include <stdlib.h>  //**for assigning a random number
#include <time.h>   //**defining the time function
int main ()
{
    int number , guess, nguesses=1;
    srand(time(0));
    number= rand()%100+1; //**guessing a number between 1 to 100
    // printf ("the number is %d\n",number); **used to get a random number:**comment out this while playing the game

    do
    {
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number)
        {
            printf("lower number please\n");
        }
        else if (guess<number)
        {
            printf("higher number please\n");
        }
        else
        {
            printf("you guessed the number in %d attempts\n",nguesses); //number of guesses
        }
        nguesses ++;
    } while (guess!=number);
return 0;
}