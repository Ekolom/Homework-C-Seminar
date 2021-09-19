/**
 * @file calculator.c
 * @author Elazar Kolom
 * @brief This file contains the implementation for the calculator function
  * @date 9/15/21
 */

#define NOT_ZERO 5
#define DELTA 0.0001

#include "calculator.h"
#include<stdio.h>

void calculator(void)
{
    Complex a, b, result;
    a = inputNumber();
    size_t input = NOT_ZERO;

    while(input != 0)
    {
        printf("enter an operation: Add(1), subtract(2), multiply(3), divide(4), or exit(0)\n");
        scanf(" %zd", &input);
        if (input > 0 && input < 5)
        {
            b = inputNumber();
            switch(input)
            {
                case 1 :
                    result = add(a, b);
                    printComplexNumber(result);
                    break;
                case 2 :
                    result = subtract(a, b);
                    printComplexNumber(result);
                    break;
                case 3 :
                    result = multiply(a, b);
                    printComplexNumber(result);
                    break;
                case 4 :
                    result = divide(a, b);
                    printComplexNumber(result);
                    break;
            }
        }
        else if(input != 0)
        {
            printf("not a valid option\n");
        }
    }
}

Complex inputNumber()
{
    char input;
    Complex num;
    printf("enter a number type: Real or complex (c for complex and r for real)\n");
    
    while (1)
    {
        scanf(" %c", &input);
        if (input == 'c' || input == 'C')
        {
            printf("enter real part of number\n");
            scanf("%lf", &num.real);
            printf("enter imaginary part of number\n");
            scanf("%f", &num.imaginary);
            break;
        }
        else if (input == 'r' || input == 'R')
        {
            printf("enter real number\n");
            scanf("%lf", &num.real);
            num.imaginary = 0;
            break;
        }
        else
        {
            printf("not a valid option\n");
        }
    }
    
    return num;
}

Complex add(Complex num1, Complex num2)
{
    Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    
    return sum;
}

Complex subtract(Complex num1, Complex num2)
{
    Complex difference;
    difference.real = num1.real - num2.real;
    difference.imaginary = num1.imaginary - num2.imaginary;
    
    return difference;
}

Complex multiply(Complex num1, Complex num2)
{
    Complex product;
    
    product.real = num1.real * num2.real;
    product.real -= num1.imaginary * num2.imaginary;
    
    product.imaginary = num1.imaginary * num2.real;
    product.imaginary += num1.real * num2.imaginary;
    
    return product;
}

Complex divide(Complex num1, Complex num2)
{
    Complex quotient;
    if (isReal(num2) && num2.real != 0)
    {
        quotient.real = num1.real / num2.real;
        quotient.imaginary = num1.imaginary / num2.real;
        return quotient;
    }
    
    if (num2.real == 0 && num2.imaginary == 0)
    {
        printf("can't divide by zero\n");
        return num1;
    }
    else
    {
        Complex numerator = multiply(num1, conjugate(num2));
        Complex denom = multiply(num2, conjugate(num2));
        return divide (numerator, denom);
    }
}

void printComplexNumber(Complex num)
{
    if(isReal(num))
    {
        printf("%lf\n", num.real);
    }
    else
    {
        printf("%lf %fi\n", num.real, num.imaginary);
    }
}

Complex conjugate(Complex num)
{
    Complex conjugate;
    conjugate.real = num.real;
    conjugate.imaginary = -(num.imaginary);
    
    return conjugate;
}

size_t isReal(Complex num)
{
    return (num.imaginary < DELTA &&num.imaginary > -DELTA) ? 1 : 0;
}

