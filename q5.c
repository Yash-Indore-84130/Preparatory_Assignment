#include <stdio.h>

int main() {
    char userInput[100];
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;
    int otherCount = 0;
    int i;

    printf("Enter a string:");
    fgets(userInput, sizeof(userInput), stdin);

    for(i = 0; userInput[i] != '\0'; i++) {
        if (userInput[i] >= 'A' && userInput[i] <= 'Z') {
            uppercaseCount++;
        } else if (userInput[i] >= 'a' && userInput[i] <= 'z') {
            lowercaseCount++;
        } else if (userInput[i] >= '0' && userInput[i] <= '9') {
            digitCount++;
        } else {
            otherCount++;
        }
    }

    printf("Character Analysis:\n");
    printf("Uppercase characters: %d\n", uppercaseCount);
    printf("Lowercase characters: %d\n", lowercaseCount);
    printf("Digit characters: %d\n", digitCount);
    printf("Other characters: %d\n", otherCount);

    return 0;
}

