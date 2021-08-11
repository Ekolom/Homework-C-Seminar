/**
 @file strlen.c
 @author Elazar Kolom
 @brief Implements the strlen() function
 @date 08/10/21
 */
#include "strlen.h"

size_t strlen(const char *str)
{
    return (*str) ? strlen(++str) + 1 : 0;
}
