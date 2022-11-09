#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main_ex1()
{
    char str[100],str2[50], str3[50];
    int len;

    gets(str);
    len = strlen(str);
    strncpy(str2, str, (len / 2));
    strncpy(str3, str + (len / 2), (len / 2)+1);
    str2[len / 2] = str3[(len / 2)+1] = 0;
    printf("%s\n%s", str2, str3);
}

