/**
 @file printDiamonds.c
 @author Elazar Kolom
 @brief Contains printFile function implementation
 @date 08/10/21
 */
#include "printDiamonds.h"

/**
 @brief prints an individual line of symbols in diamond
     (along with the spaces leading up to it)
 
 @param spaces The number of spaces to print before the symbols
 @param symbols The number of characters to print after the spaces
 */
void printLine(int spaces, int symbols)
{
    for (int i = 0; i < spaces; ++i)
    {
        printf(" ");
    }
    for (int i = 0; i < symbols; ++i)
    {
        printf("*");
    }
    printf("\n");
}

void printDiamonds(int base, char symbol)
{
    int spaces = base / 2;
    int symbols = 1;
    
    for (; symbols < base; symbols = symbols + 2)
    {
        printLine(spaces, symbols);
        --spaces;
    }
    
    for(; symbols > 0; symbols = symbols -2)
    {
        printLine(spaces, symbols);
        ++spaces;
    }
}

