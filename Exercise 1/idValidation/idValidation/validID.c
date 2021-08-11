/**
 @file validID.c
 @author Elazar Kolom
 @brief Contains validID function implementation
 @date 08/10/21
 */

#include "validID.h"

bool validID(int id_num)
{
    int lastdigit = id_num % 10;
    id_num /= 10;
    
    return check_sum(id_num) == lastdigit;
}
