#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// main function which takes command line arguments
int main(int argc, string argv[])
{
    // setting condition to make sure the user types in 2 commands in the prompt
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
   
    //converting the user key to an integer
    int key = atoi (argv[1]);
    
    // making sure the user inputs a non-negative integer
    if (!key)
    {
        printf("The key should be a non-negative integer\n");
        return 1;
    }
    
    // getting user input
    string plaintext = get_string("Plaintext : ");
    
    // printing the output
    printf("ciphertext: ");
    
    //looping over the length of the input to encrypt the message 
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (islower(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'a' + key) % 26 + 'a');
        }
        else if (isupper(plaintext[i]))
        {
            printf("%c", (plaintext[i] - 'A' + key) % 26 + 'A');
        }
        else
        {
            printf("%c", plaintext[i]);
        }
         
    }
    
    printf("\n");
    
    return 0;
}
