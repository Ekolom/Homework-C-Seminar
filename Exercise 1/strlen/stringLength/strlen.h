/**
 @file strlen.h
 @author Elazar Kolom
 @brief Definition of strlen() standard C function
 @date 08/10/21
 */

#ifndef strlen_h
#define strlen_h

#include <stdlib.h>

/**
 @brief returns the length of the input string
 
 @param str is the string we wish to know length of
 @return unsigned long value corresponding to length of the string
 */
size_t strlen(const char *str);

#endif /* strlen_h */
