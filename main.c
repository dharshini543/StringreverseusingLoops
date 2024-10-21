#include <stdio.h>
#include<string.h>

int main()
{

    char string[] = "Hello World";
    int length = strlen(string);

    printf("Reverse of Hello World is\n");
    for(int i = 0;i < length/2;i++)
    {
        char ch = string[i];
        string[i] = string[length - i - 1];
        string[length-i-1] = ch;

    }
    printf("%s\n",string);
    return 0;
}
