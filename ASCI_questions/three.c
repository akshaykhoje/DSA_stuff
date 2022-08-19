// Reverse string

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
    return; 
}

int main(void)
{   
    char str[20];
    scanf("%s", &str);
    for (int i = 0; i < strlen(str)/2; i++)
    {
        swap(&str[i], &str[strlen(str) - i - 1]);
    }
    printf("%s\n", str);
   return 0;
}

