#include <stdio.h>
#include <cs50.h>

// Function prototype of get_positive_int
int get_positive_int(string prompt);
    
int main(void)
{
    // asking for user input
    int number = get_positive_int("Please insert a number between 1 and 8 inclusive : ");
    
    // nested for loops to print the '#'s
    for(int i = 0; i < number; i++){
        
        // loop for printing the spaces
        for(int j = 0; j < number-1-i; j++){
            printf(" ");
        }
        
        // loop for printing the hashes
        for(int j = 0; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
  
}

// Function to check if user input is correct
int get_positive_int(string prompt)
{
   int n;
    do
    {
        n = get_int("%s", prompt);
    }
    while(n < 1 || n > 8);
    return n ;
}
