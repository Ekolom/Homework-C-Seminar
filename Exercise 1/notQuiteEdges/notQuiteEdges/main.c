/**
 @file notQuiteEdges.c
 @author Elazar Kolom
 @brief reads numbers from the user (terminated by 0) and prints the second largest and second smallest numbers
 @date 08/10/21
 */

#include <stdio.h>
#include <limits.h>

int main ()
{
    int min = INT_MAX;
    int secondmin = INT_MAX;
    int max = INT_MIN;
    int secondmax = INT_MIN;
    int input;
    
    printf("enter a number\n");
    scanf("%d", &input);
    while (input != 0)
    {
        if (input > max)
        {
            secondmax = max;
            max = input;
        }
        else if (input < max && input > secondmax)
        {
            secondmax = input;
        }
        
        if (input < min)
        {
            secondmin = min;
            min = input;
        }
        else if (input > min && input < secondmin)
        {
            secondmin = input;
        }
        
        printf("enter a number\n");
        scanf("%d", &input);
    }
    
    printf("second largest number is %d\n", secondmax);
    printf("second smallest number is %d\n", secondmin);
}
