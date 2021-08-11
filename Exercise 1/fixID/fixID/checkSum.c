/**
 @file checkSum.c
 @author Elazar Kolom
 @brief Contains checkSum function implementation
 @date 08/10/21
 */

#include "checkSum.h"

/**
 @param number The integer number we wish to obtain its sum
 @return sum of all the numbers digits
 */
int sum_of_digits (int number)
{
    int sum = 0;
    
    while (number)
    {
        sum += (number % 10);
        number = number / 10;
    }
    
    return (sum);
}

int check_sum (int id_num)
{
    int weight = 0; // keeps track to multiply every other digit by two
    int digit;
    int sum = 0;
    
    while (id_num > 0)
    {
        digit = id_num % 10;
        if (weight % 2 == 0)
            digit *= 2;
        
        sum += sum_of_digits (digit);
        
        id_num /= 10;
        weight ++;
    }
    
    int id_check_sum = 10 - (sum % 10);
    id_check_sum %= 10;
    return (id_check_sum);
}
