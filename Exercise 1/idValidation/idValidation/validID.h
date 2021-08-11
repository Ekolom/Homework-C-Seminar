/**
 @file validID.h
 @author Elazar Kolom
 @brief Contains validID function definition
 @date 08/10/21
 */

#ifndef validID_h
#define validID_h

#include <stdio.h>
#include <stdbool.h>
#include "checkSum.h"

/**
 @brief checks whether an id number is valid or not
 
 @param id_num The id number to check
 @return true if number is valid, otherwise false
 */
bool validID(int id_num);

#endif /* validID_h */
