/**
 * @file calculator.h
 * @author Elazar Kolom
 * @brief This file contains the function declerations for the calculator function
 * @date 9/15/21
 */

#ifndef calculator_h
#define calculator_h

#include <stdio.h>
#include "complexNumber.h"

/**
 * Ask the user for a number type: Real or complex
 * Receive a number (real or complex) from the user
 * Ask the user for an operation: Add, subtract, multiply, divide, or exit
 * If not exit: Receive another number from the user.
 * The user may choose a different type than the last one.
 * Perform the operation and display the results
 * Back to operation input step
 */
void calculator(void);

/**
 * Asks the user if the number will be real or complex.
 * Takes input from the user until a correct input is given
 * @return Complex number that was input
 */
Complex inputNumber(void);

/**
 * Prints the complex number in the format a or a + bi for real and
 * complex numbers respectively
 */
void printComplexNumber(Complex num);

/**
 * @brief adds two complex numbers
 * @param num1 first number to be added
 * @param num2 second number to be added
 * @return the sum of the two numbers
 */
Complex add(Complex num1, Complex num2);

/**
 * @brief subtracts two complex numbers
 * @param num1 The number we subtract from
 * @param num2 The number we subtract with
 * @return the difference of the two numbers
 */
Complex subtract(Complex num1, Complex num2);

/**
 * @brief multiplies two complex numbers
 * @param num1 first number to be multiplied
 * @param num2 second number to be multiplied
 * @return the product of the two numbers
 */
Complex multiply(Complex num1, Complex num2);

/**
 * @brief divides two complex numbers
 * @param num1 The numerator
 * @param num2 The denominator
 * @return The quotient
 */
Complex divide(Complex num1, Complex num2);

/**
 @ param num The number we wish to take the conjugate of
 * @return the conjugate of the number (same real, negative imaginary)
 */
Complex conjugate(Complex num);

/**
 * @brief Boolean function to decide whether a number is real (zero imaginary value)
 * We test whether the number is close enough (within some defined DELTA) to zero
 * to account for accuracy issues
 * @return 1 if it close to zero, otherwise 0
 */
size_t isReal(Complex num);

#endif /* calculator_h */
