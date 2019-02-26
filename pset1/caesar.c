// Binntou Camara. Kagame cohort
#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
    string b;
    int key=atoi(argv[1]);
    {
        printf("type again: ");
    }
    b=get_string("enter your plaintext: ");

    for(int i=0;i<strlen(b);i++)
    if(isalpha(b[i]))
     {
        if(isupper(b[i]))
            {
                printf("%c",(((b[i]- 'A' ) + key)%26) + 'A');
            }
            else if(islower(b[i]))
            {
                printf("%c",(((b[i]- 'a') + key)%26) + 'a');
            }
    }
            else
            {
                printf("%c",b[i]);
            }
            printf("\n");
    }
}