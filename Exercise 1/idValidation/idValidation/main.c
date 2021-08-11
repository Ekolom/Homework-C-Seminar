/**
 @file idValidation.c
 @author Elazar Kolom
 @brief takes user input for id number and prints whether it is valid or not
 @warning only accepts psotive integers with at most 9 digits
 @date 08/10/21
 */

#include <stdio.h>
#include <stdbool.h>
#include "validID.h"

#define UPPER_LIMIT 999999999
/**
 @brief determins if number is positive and at most 9 digits
 
 @param num The number to check
 @return true if number is in correct range
 */
bool inRange(int num)
{
    return (num >= 0) && (num <= UPPER_LIMIT);
}

int main ()
{
    int id;
    printf("enter id number\n");
    scanf("%d", &id);
    while (!inRange(id))
    {
        printf("id must be 0 to 9 digits");
        scanf("%d", &id);
    }
    printf(validID(id) ? "valid\n" : "not valid\n");
}
