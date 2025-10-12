#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){


    //FIXME: arithmetic operation


    int age=0;
    float gpa=0.0f;
    char grade= '\0';
    char name[30]= "";


    printf("Enter your age: ");
  
    scanf  ("%d", &age);


    printf("Enter your gpa: ");
    scanf  ("%f", &gpa);

    printf("Enter your grade: ");
    scanf  (" %c", &grade);
   

    getchar(); //NOTE: to consume the newline character left by previous scanf
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);   //NOTE:- fgets is  to read string with spaces 
      

    

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    
   
    


    

    return 0;


    

    }




    

