#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // getting the user's name
    string name = get_string("Name : ");
    
    printf("\n");
    
    printf("Output : ");
    // looping over the length of the name to capitalize it
    for(int i = 0; i < strlen(name); i++ )
    {
        // checking if the character is lower case
        if(name[i] >= 'a' && name[i] <='z')
        {
            // converting the character to uppercase if it is lower case
            printf("%c", name[i] - ('a' - 'A'));
        }
        else
        {
            // leaving the character as upper case if it was initially uppercase
            printf("%c", name[i]);
        }
    }
    
    printf("\n");
}
