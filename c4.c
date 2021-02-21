#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>



int main()
{
    string text = "abc AbZ ,14, !";
    
    int key = 1;
    
    for (int i = 0; i < strlen(text); i++)
    {
        int num;
        // changes only alpha
        if (isalpha(text[i]) != 0)
        {
            if (islower(text[i]) !=0)
            {
                num = (((int)text[i] - 97 + key) % 26) + 97;
                printf("%c", (char) num);
            }
            if (isupper(text[i]) !=0)
            {
                num = (((int)text[i] - 65 + key) % 26) + 65;
                printf("%c", (char) num);
            }
        }
        else
        {
            printf("%c", text[i]);
        }
    }
}
