#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Function prototype of get_positive_int
float get_positive_float(string prompt);

// main function
int main(void)
{
    // getting the user input: user's change
    float change = get_positive_float("Change: ");
    
    int cents = round(change*100);
    
        // initializing number_of_coins_used to keep track of number of coins used;
        int number_of_coins_used = 0;
        
        // setting up conditions for choosing the correct coin to give a customer using while loops
        while(cents >= 25){
            cents = cents - 25;
            number_of_coins_used++;
        }
        
        while(cents < 25 && cents >= 10){
            cents = cents - 10;
            number_of_coins_used++;
        }
        
        while(cents < 10 && cents >= 5){
            cents = cents - 5;
            number_of_coins_used++;
        }
        
        while(cents < 5 && cents >= 1){
            cents = cents - 1;
            number_of_coins_used++;
        }
     
    // printing the number of coins used
     printf("%i\n\n", number_of_coins_used);
    
}

// Function to check if user input is correct
float get_positive_float(string prompt)
{
    float n;
    do
    {
        n = get_float("%s", prompt);
    }
    while(n < 0);
    return n;
}
