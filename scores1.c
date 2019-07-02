
#include <stdio.h>
#include <cs50.h>

// Function prototype of chart
void chart(int score);

// global variable count
int count = 3;

int main(void)
{
    // declaring an array of size 3 to store scores from the user
    int scores[count];
    
    // loop to ask input from the user 3 times
    for(int i = 0; i < count; i++)
    {
        
        scores[i] = get_int("Score : ");
        
    }
    
    printf("\n");
    
    // loop to print 3 lines of hashes based on user input
    for(int i = 0; i < count; i++)
    {
        chart(scores[i]);
    }
}

// function chart to print hashes
void chart(int score)
{
    for(int i = 0; i < score; i ++)
    {
        printf("#");
    }
    
    printf("\n");
}
