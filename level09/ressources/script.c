#include <stdio.h>

int main(int argc, char *argv[])
{
    int count = 0;
    while (argv[1][count] != 0)
    {
        printf("%c", argv[1][count] - count);
        count++;
    }
    printf("\n");
    return(0);
}