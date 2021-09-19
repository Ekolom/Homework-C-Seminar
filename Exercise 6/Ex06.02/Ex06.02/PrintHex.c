/**
 * @file PrintHex.c
 * @author Elazar Kolom
 * @brief File contians the implementation of the PrintHex function
 * @date 9/17/21
 */

#include "PrintHex.h"

void PrintHex(void *address, size_t size)
{
    // unsigned char 0-255
    unsigned char* iterator = (unsigned char*)address;
    
    for (size_t index = 0; index < size; ++index)
    {
        printf("0x%02x\n", *iterator);      // 0x - indicated hex
        ++iterator;                         // 0 - tells to pad with zeros in front
    }                                       // 2 - amount of places
}                                           // %x - hexidecimal
