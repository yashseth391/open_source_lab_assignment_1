#include <stdio.h>

// Function to swap two characters
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    // Consume the newline character left in the input buffer
    getchar();

    char temp[100];

    // Read n characters into temp array
    printf("Enter %d characters: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%c", &temp[i]);
    }

    // Reverse the array temp
    for (int i = 0; i < n / 2; i++) {
        swap(&temp[i], &temp[n - 1 - i]);
    }

    // Print reversed characters
    printf("Reversed characters: ");
    for (int i = 0; i < n; i++) {
        printf("%c", temp[i]);
    }
    printf("\n");

    return 0;
}

