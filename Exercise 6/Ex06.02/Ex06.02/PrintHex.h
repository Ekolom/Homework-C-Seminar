/**
 * @file PrintHex.h
 * @author Elazar Kolom
 * @brief File contians the PrintHex function declaration
 * @date 9/17/21
 */

#ifndef PrintHex_h
#define PrintHex_h

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Function prints the hexadecimal representation of a variable from that address forward
 * @param address The variable’s address (*void because we don't know the type in advance)
 * @param size The variable's size in bytes
 */
void PrintHex(void *address, size_t size);

#endif /* PrintHex_h */
