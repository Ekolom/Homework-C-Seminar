/**
 * @file Ex04.01
 * @author Elazar Kolom
 * @brief The program tests the reverse string function
 * @date 9/15/21
 */

#include <stdio.h>
#include "reverseString.h"

int main()
{
    char str1 [] = "hello";
    printf("The reverse of %s is: ", str1);
    reverseString(str1);
    
    char str2 [] = "mississippi";
    printf("The reverse of %s is: ", str2);
    reverseString(str2);
    
    return 0;
}
