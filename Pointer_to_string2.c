// pointer to string

#include <stdio.h>
#include <string.h>

int main()
{
char *str = "Pointer-to-string";
int i, j = strlen(str);
for(i = 0; i < j; i++)
printf("%c", *str++);
return 0;
}
