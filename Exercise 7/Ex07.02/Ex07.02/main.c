/**
 * @file Ex07.02
 * @author Elazar Kolom
 * @brief This program creates a macro that prints a variable name and its value,
        but only in debug mode. We require a separate macro for each data type.
 * @date 8/31/21
 */

#include <stdio.h>

#define TRACE_INT_VAR(x) printf(#x " = %d\n", x)
#define TRACE_DOUBLE_VAR(y) printf(#y " = %g\n", y)
#define TRACE_UNS_VAR(z) printf(#z " = %zul\n", z)

#define ARRAY_SIZE 3

int main(void)
{
    int x = 10;
#ifdef DEBUG
    TRACE_INT_VAR(x);
#endif
    
    int sum = 0;
    double average;
    int grades[ARRAY_SIZE] = {90, 78, 85};
    
    for (size_t index = 0; index < ARRAY_SIZE; ++index)
    {
        sum += grades[index];
        average = sum / (index + 1);
        
#ifdef DEBUG
        TRACE_UNS_VAR(index);
        TRACE_INT_VAR(grades[index]);
        TRACE_DOUBLE_VAR(average);
        TRACE_INT_VAR(sum);
#endif
    }

    return 0;
}

