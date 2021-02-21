#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
// declaration of plaintext
string Plaintext(string t, int k);

int main(int argc, string argv[])
{
    int key;
    
    if ((argc > 2 || argc == 1) || (atoi(argv[1]) == 0))
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    else
    {
        printf("Success\n");
        
    }
    key = atoi(argv[1]);
    string plaintext = get_string("plaintext: ");
    
    Plaintext(plaintext, key);
}
string Plaintext(string t, int k)
{
    for (int i = 0; i < strlen(t); i++)
    {
        // changes only alpha
        if (isalpha(t[i]) != 0)
        {
            printf("%c", t[i] + k);
        }
        else
        {
            printf("%c", t[i]);
        }
    }
    printf("\n");
    return 0;
}



