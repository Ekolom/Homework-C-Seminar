/**
 * @file printNumbersReversed.c
 * @author Elazar Kolom
 * @brief contains the implementation to printInputReversed function
 * @date 8/31/21
 */

#include "printNumbersReversed.h"

void printInputReversed(size_t number)
{
    if (number != 0)
    {
        int nextValue;
        printf("enter next value:\n");
        scanf("%d", &nextValue);
        printInputReversed(--number);
        printf("%d ", nextValue);
    }
}
