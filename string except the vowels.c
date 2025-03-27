#include <stdio.h>
#include<string.h>

int main()
{
    int i;
    char str[100];
    printf("Enter string: ");
    gets(str);
    printf("String except the vowels: ");
    for(i=0; str[i]!='\0'; i++)
    {
        if( str[i]==str[i] )
        {
        printf("%c",str[i]);

        }

    }



    return 0;
}
