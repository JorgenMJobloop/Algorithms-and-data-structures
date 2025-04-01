#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void Sequential(char n[], char letter)
{
    bool is_found = false;
    int i = 0;
    while (!is_found && i < strlen(n))
    {
        if (n[i] == letter)
        {
            is_found = true;
        }
        else
        {
            i++;
        }
    }
    if (is_found)
    {
        printf("Letter found!\n%c", letter);
    }
}

int main()
{
    char pool[] = "hello";
    Sequential(pool, 'o');
    return 0;
}