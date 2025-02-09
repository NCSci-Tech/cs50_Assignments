#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[10];
    int height;

    while (1) {
        printf("Enter height: ");
        fgets(input, sizeof(input), stdin);

        height = atoi(input);

        if (height > 0) {
            break;
        }

        printf("Invalid input. Please enter a positive integer.\n");
    }

    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("#");
        }

        printf("  ");

        for (int j = 0; j < i; j++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
