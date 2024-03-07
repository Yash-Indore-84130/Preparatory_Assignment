#include <stdio.h>
#include <ctype.h>

int main() {
    char userInput[100];
    int alphabetCount[26] = {0};
    int i;

    // Accepting user input
    printf("Input: ");
    fgets(userInput, sizeof(userInput), stdin);

    // Counting occurrences
    for (i = 0; userInput[i] != '\0'; i++) {
        if (isalpha(userInput[i])) {
            // Convert the character to uppercase for case-insensitivity
            char uppercaseChar = toupper(userInput[i]);
            // Increment the count for the corresponding alphabet
            alphabetCount[uppercaseChar - 'A']++;
        }
    }

    // Printing the output
    printf("Output:\n");
    for (i = 0; i < 26; i++) {
        if (alphabetCount[i] > 0) {
            printf("%c : %d\n", 'A' + i, alphabetCount[i]);
        }
    }

    return 0;
}

