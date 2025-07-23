#include <stdio.h>

#define MAX_SIZE 10000

int main()
{
    // 1. Declare an array with the maximum possible size.
    int arr[MAX_SIZE];
    int size = 0; // This will count the actual number of inputs.
    char next_char;

    // 2. Read numbers until the line ends.
    do
    {
        // Safety check to prevent writing past the end of the array.
        if (size >= MAX_SIZE)
        {
            break;
        }

        // Read one integer directly into the array.
        if (scanf("%d", &arr[size]) == 1)
        {
            size++;
        }

        // Check the character after the number to see if it's the end of the line.
        next_char = getchar();

    } while (next_char != '\n' && next_char != EOF);

    // 3. Print the numbers that were actually read.
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        // Print a space after each number except the last one.
        if (i < size - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}