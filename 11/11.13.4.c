#include<stdio.h>
#define LEN 20
char *getword(char *str, int n);

int main()
{
    char input[LEN];
    char *check;
    check = getword(input, LEN - 1);
    if (check == NULL)
        puts("Input failed.");
    else
        puts(input);
    puts("Done.\n");
    return 0;
}

char * getword(char * str, int n)
{
    int i;
    int ch;
    _Bool check = 0;
    for (i = 0; i < n; i++)
    {
        ch = getchar();
        if ((ch == ' ' || ch == '\t') &&check == 0)
        {
            i--;
            continue;
        }
        check = 1;
        if (ch != EOF && ch != '\t' && ch != ' ')

            str[i] = ch;
        else
            break;
    }
    if (ch == EOF)
        return NULL;
    else
    {
        str[i] = '\0';
        return str;
    }
}