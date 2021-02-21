#include<stdio.h>   //printf
#include<cs50.h>    //get
#include<ctype.h>   //isdigit
#include<string.h>  //strlen
#include<stdlib.h>  //atoi

// declaration of plaintext
string Plaintext(string t, int k);

int main(int argc, string argv[])
{
    int key;
    
    //check for argument line
    if ((argc != 2) || atoi(argv[1]) <= 0)
    {
        printf("Usage: %s key\n", argv[0]);
        
        return 1;
    }
    // checks for non-digit char in argv[1]
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: %s key\n", argv[0]);
            
            return 1;
        }
    }
    
    // converting string into int
    key = atoi(argv[1]);
    
    //plaintext input
    string plaintext = get_string("plaintext: ");
    
    //call of function
    printf("ciphertext: ");
    
    Plaintext(plaintext, key);
}

string Plaintext(string t, int k)
{
    for (int i = 0, n = strlen(t); i < n; i++)
    {
        int cipher;
        
        // calculation part, changes ascii values of a variable
        if (islower(t[i]) != 0)
        {
            cipher = (((int)t[i] - 97 + k) % 26) + 97;
            
            printf("%c", (char) cipher);
        }
        else if (isupper(t[i]) != 0)
        {
            cipher = (((int)t[i] - 65 + k) % 26) + 65;
            
            printf("%c", (char) cipher);
        }
        else
        {
            printf("%c", t[i]);
        }
    }
    printf("\n");
    return 0;
}