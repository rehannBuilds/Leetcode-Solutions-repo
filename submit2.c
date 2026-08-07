#include <stdio.h>

int main()
{
    int marks[8] = {56, 89, 72, 45, 91, 68, 77, 60};
    int i, j, temp;

    printf("Original marks: ");
    for (i = 0; i < 8; i++)
        printf("%d ", marks[i]);

    for (i = 0; i < 8 - 1; i++)
    {
        for (j = 0; j < 8 - i - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    printf("\nSorted marks: ");
    for (i = 0; i < 8; i++)
        printf("%d ", marks[i]);

    printf("\n");

    return 0;
}