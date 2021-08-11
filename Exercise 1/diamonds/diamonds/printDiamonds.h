/**
 @file printDiamonds.h
 @author Elazar Kolom
 @brief Contains printFile function declaration
 @date 08/10/21
 */

#ifndef printDiamonds_h
#define printDiamonds_h

#include <stdio.h>

/**
 @brief prints a diamond of the character symbol provided
 @warning only accepts positive, odd numbered base
 
 @param base Determines the base length of the two triangles in the diamond
 @param symbol The character that makes up the diamond
 */
void printDiamonds(int base, char symbol);

#endif /* printDiamonds_h */
