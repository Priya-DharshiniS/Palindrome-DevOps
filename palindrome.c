//Here is a simple C program that checks if a given string is a palindrome:

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome\n", str);
    return 0;
}
