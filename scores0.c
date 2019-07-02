#include <stdio.h>
#include <cs50.h>

void chart(int score);

int main(void)
{
    int score1 = get_int("Score1: ");
    int score2 = get_int("Score2: ");
    int score3 = get_int("Score3: ");
    printf("\n");
    
    printf("Score1 : ");
    chart(score1);
    
    printf("Score2 : ");
    chart(score2);
    
    printf("Score3 : ");
    chart(score3);
    
}


void chart(int score)
    {
        for(int i = 0; i < score; i++)
        {
            printf("#");
        }
        
        printf("\n");
    }
