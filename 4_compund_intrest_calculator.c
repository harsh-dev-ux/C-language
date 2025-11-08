#include<stdio.h>
#include<math.h>

int main() { 

    


    double principle = 0;
    double rate = 0;
    int years = 0;
    int timescompund = 0; 
    double total = 0;



    printf("Compund Interest Calculator\n");

    printf("Enter Principle Amount(p): ");
    scanf("%lf", &principle);


    printf("Enter Rate of Interest in percentage (r): ");
    scanf("%lf", &rate);

    rate = rate / 100; //converting percentage to decimal

    printf("Enter number of years (t): ");
    scanf("%d", &years);
    
    printf("Enter number of times  compunded per year (n): ");
    scanf("%d", &timescompund);

    total = principle * pow(1 + rate / timescompund , timescompund * years );

    printf("After %d years , the total will be $%.2lf" , years , total);























    return 0;
}