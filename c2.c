#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
// check for condition
int main(int argc, string argv[])
{
    //int key;
    
    if ((argc > 2 || argc == 1) || (atoi(argv[1]) == 0))
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }
    else
    {
        printf("Success");
    }
    
}