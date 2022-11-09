#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

void main_test3()
{
	char str[100], str2[50], str3[50];
	int len;
	gets(str);

	len = strlen(str);
	strncpy(str2, str, (len / 2));
	str2[(len / 2)] = 0;

	strncpy(str3, str+(len/2), (len / 2)+1);
	str3[(len / 2) + 1] = 0;

	printf("%s\n", str2);

	len = strlen(str2);

	while (len>0)
	{
		strncpy(str2, str2, (len / 2));
     	str2[(len / 2)] = 0;
		len = strlen(str2);
		printf("%s\n", str2);
	}
	


}