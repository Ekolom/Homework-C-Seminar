/**
 @file warmup.c
 @author Elazar Kolom
 @brief takes character input and prints it until 'Q' or 'q' received
 @date 08/10/21
 */

#include <stdio.h>

int main()
{
    int c;
    
    while ((c = getchar()) != 'Q' && c != 'q')
    {
        putchar(c);
    }
}
