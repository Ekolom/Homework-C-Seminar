/**
 @file fixID.c
 @author Elazar Kolom
 @brief takes user input for ID number and prints the check digit
 @warning program waits for a positive number no more than 8 digits long
 @date 08/10/21
 */

#include <stdio.h>
#include <stdbool.h>
#include "checkSum.h"

#define UPPER_LIMIT 99999999

/**
 @brief decides whether a number is positive and maximum 8 digits long
 
 @param num The number we are checking
 @return true if num is in range, otherwise false
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
        printf("id must be 0 to 8 digits");
        scanf("%d", &id);
    }
    printf("%d\n", check_sum(id));
}
