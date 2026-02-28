#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("It is an Alphabet.\n");
    else
        printf("It is NOT an Alphabet.\n");

    return 0;
}