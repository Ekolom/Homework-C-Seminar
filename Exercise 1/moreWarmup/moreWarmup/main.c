/**
 @file moreWarmup.c
 @author Elazar Kolom
 @brief takes character input and prints it in uppercase until 'Q' or 'q' received
 @date 08/10/21
 */

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c;
    
    while ((c = getchar()) != 'Q' && c != 'q')
    {
        putchar(toupper(c));
    }
}
