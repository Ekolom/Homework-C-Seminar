/**
 * @file reverseString.c
 * @author Elazar Kolom
 * @brief This file contains the implementation to the reverseString function
 * @date 9/15/21
 */

#include "reverseString.h"
#include <string.h>

void reverseString(char *str)
{
    size_t length = strlen(str);
    for (size_t index = length; index > 0; --index)
    {
        putchar(str[index-1]);
    }
    printf("\n");
}
