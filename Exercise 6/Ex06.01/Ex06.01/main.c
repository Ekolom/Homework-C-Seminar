/**
 * @file Ex06.01
 * @author Elazar Kolom
 * @brief program that reads a number n from the user, followed by n other numbers.
 *     The program will then print the numbers in reverse order.
 * @date 8/31/21
 */

#include <stdio.h>
#include "printNumbersReversed.h"

int main()
{
    size_t number;
    printf("enter a positive number: \n");
    scanf("%zul", &number);
    printInputReversed(number);
    printf("\n");
    
    return 0;
}
