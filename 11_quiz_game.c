#include<stdio.h>
#include<ctype.h>



int main() {  
    //NOTE:- MADE FOR FUN PURPOSES ONLY. added my friends and teachers names :D 

char questions[][100] = { "that one guy who never studies but tops the class?",
                         "that one sir who wakes up - come to class- ragebit harshwardhan and goes home back ?",
                         "WWHO IS THE GOAT?",
                         "IS THERE ONE GAY BOY IN CLASS?"};

char options[][100] = {"A. JAYESH\nB. HARSHWARDHAN\nC. HARSH\nD. ABHISHEK\n",
                       "A. prashant patil\nB. smita suhane\nC. deepika mam\nD. prachi mam\n",
                       "A. RONALDO\nB. RONALDINO\nC. RONALDO r9\nD. ZIZOU\n",
                       "A. YES\nB. NO\nC. MAYBE\nD. DEFINITELY\n" };

char answerKey[] = {'B', 'A', 'A', 'D'}; 

int questionCount = sizeof(questions) / sizeof(questions[0]);

char guess ='\0';
int score = 0;

printf("WELCOME TO THE QUIZ GAME\n");

for(int i = 0; i < questionCount; i++) {

    printf("\n%s\n", questions[i]);
    printf("\n%s\n", options[i]);
    printf("Enter your answer: ");
    scanf(" %c", &guess);

    guess  = toupper(guess);




    if(guess == answerKey[i]) {
        printf("CORRECT ANSWER!\n");
        score++;
    } else {
        printf("WRONG ANSWER!\n");

    }
}

printf("\n YOUR FINAL SCORE IS: %d out of %d\n", score, questionCount);







return 0;

} 