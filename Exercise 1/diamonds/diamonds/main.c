/**
 @file diamonds.c
 @author Elazar Kolom
 @brief Tests printDiamonds function
 @date 08/10/21
 */

#include <stdio.h>
#include <stdbool.h>
#include "printDiamonds.h"

/**
 @brief returns true if num is odd, otherwise false
 
 @param num is integer we are testing if odd or not
 */
bool isOdd(int num)
{
    return (num % 2) != 0;
}

int main ()
{
    int base;
    printf("enter the base number\n");
    scanf("%d", &base);
    
    if (base > 0 && isOdd(base))
    {
        printDiamonds(base, '*');
    }
}
