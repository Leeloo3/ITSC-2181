#include <stdio.h>
#include <string.h>

// Function to print the length of a string
void printLength(const char *str) {
    printf("Length of string: %zu\n", strlen(str));
}

// Function to concatenate two strings and print the result
void concatenateStrings(const char *str1, const char *str2) {
    char concatenated_string[100]; // Ensure it's large enough to hold both strings
    strcpy(concatenated_string, str1);
    strcat(concatenated_string, " ");
    strcat(concatenated_string, str2);
    printf("Concatenated string: %s\n", concatenated_string);
}

// Function to compare two strings and copy the lesser to the greater
void compareAndCopy(char *str1, char *str2) {
    if (strcmp(str1, str2) < 0) {
        strcpy(str2, str1);  // Copy str1 to str2
    } else {
        strcpy(str1, str2);  // Copy str2 to str1
    }
    printf("After comparison, str1: %s and str2: %s\n", str1, str2);
}

// Function to count occurrences of '?' in a string
void countQuestionMarks(const char *str) {
    int question_mark_count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '?') {
            question_mark_count++;
        }
    }
    printf("Number of '?' in string: %d\n", question_mark_count);
}

int main() {
    // Test strings
    char string1[] = "Hello, world!";
    char string2[] = "Welcome to C.";
    char string3[] = "apple/banana";
    char string4[] = "banana";
    char string5[] = "How are you? Are you okay? Yes? No.";

    // Call functions
    printLength(string1);
    concatenateStrings(string1, string2);
    compareAndCopy(string3, string4);
    countQuestionMarks(string5);

    return 0;
}
