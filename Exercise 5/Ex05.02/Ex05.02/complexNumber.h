/**
 * @file complexNumber.h
 * @author Elazar Kolom
 * @brief This file contains the struct for a complex number
 * @date 9/15/21
 */

#ifndef complexNumber_h
#define complexNumber_h

/**
 * @brief consists of a real number stored as a double and an imaginary number
 * stored as a float
 * A real number is a complex number with the imaginary value 0
 */
typedef struct complexNumber
{
    double real;
    float imaginary;
} Complex;

#endif /* complexNumber_h */
