#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


//Main function must take two argments: the plain text and the cypher. It must be just two words
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar k");
        return 1;
    }

    // Start's the coding process. loop throught all the keys caracter and assure it's an integer.
    for (int key = 0; key < strlen(argv[1]); key++)
    {
        if (isalpha(argv[1][key]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]) % 26; // converts the ASCII to an integer from "20" to 20 as an interger

    // takes the plaintext from the user
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    // iterates over the plain text with a for loop
    for (int i = 0, length = strlen(plaintext); i < length; i++)
    {
        if (!isalpha(plaintext[i]))
        {
            //prints the current element of the array if it's not alpha
            printf("%c", plaintext[i]);
            continue;
        }
        // checking if the current element it's uppercase
        int offset = isupper(plaintext[i]) ? 65 : 97;
        // calculating how far the current element is from lowercase "a" or uppercase "A"
        int pi = plaintext[i] - offset;
        // index of the letter cyphering
        int ci = (pi + key) % 26;

        // printing the new character cyphered
        printf("%c", ci + offset);
    }


    printf("\n");
    return 0;


}
