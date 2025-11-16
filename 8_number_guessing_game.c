#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){

     srand(time(NULL));
     
     int guess = 0;
     int tries = 0;
     int min = 1;
     int max = 100;
     int answer = rand() % (max - min + 1  ) + min ;

     printf("***  Welcome to the Number Guessing Game  ***\n");

     do { 
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;

        if(guess<answer){
            printf("TWO LOW !\n");
        }
        else if ( guess> answer){
        printf("TOO HIGH !\n");
        }
        else{
            printf("CONGRATS ! YOU GUESSED IT RIGHT !\n");
        }




     } while (guess != answer);

     printf("The ans is %d\n", answer);
     printf("You guessed it in %d tries!\n", tries);


    return 0 ;
}