#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    string b;
    int key;
    string c;

    if(argc != 2)
    {
        printf("type again: ");
    }
    s=get_string("enter your plaintext");
    key=atoi(argv[1]);

    for(int i=0;i<strlen(b);i++)
        if(isupper(s[i]))

        {
            printf('%c",((b[i]- 'A' ) + key) % 26 + 'A');
        }
            else if(islower(b[i]))
            {
                printf("%c",((b[i]- 'a' + key ) % 26 + 'a');
            }
            else
            {
                printf("%c",b[i]);
            }
            printf("\n");
            }

            }
    }
}