#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main() {
//NOTE: PROGRAMM- SHOPPING CART PROGRAM 

char item [50] = "";
float price = 0.0f;
int quantity = 0;
char currency = '$';
float total = 0.0f;


printf("Enter item name: ");
fgets(item, sizeof(item), stdin);
item[strlen(item) - 1] = '\0'; //NOTE: Remove newline character

printf("What is the price of each? ");
scanf("%f", &price);

printf("How many do you want to buy? ");
scanf("%d", &quantity);

total = price * quantity;

printf("\nYou are buying %d %s/s\n" , quantity  , item);

printf("Your total is: %.2f%c%" , total , currency);








return 0;
}

