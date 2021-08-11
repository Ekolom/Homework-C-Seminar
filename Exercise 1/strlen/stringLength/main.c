/**
 @file stringLength.c
 @author Elazar Kolom
 @brief Tests the strlen function
 @date 08/10/21
*/

#include <stdio.h>
#include "strlen.h"

int main()
{
    printf("%lu\n", strlen(""));
    printf("%lu\n", strlen("I"));
    printf("%lu\n", strlen("say"));
    printf("%lu\n", strlen("hello"));
}
