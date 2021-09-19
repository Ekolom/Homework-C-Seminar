/**
 * @file Ex06.02
 * @author Elazar Kolom
 * @brief
 * @date 9/17/21
 */

#include <stdio.h>

int main()
{
    char c = 'A'; /* ASCII value 65 */
    PrintHex(&c, sizeof(c));
    
    int i = 0x11223344;
    PrintHex(&i, sizeof(i));
    
    return 0;
}


