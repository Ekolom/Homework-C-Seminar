/**
 * @file Ex05.01
 * @author Elazar Kolom
 * @brief Tests the sorting of a dog struct
 * @date 9/17/21
 */


#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

#define ARRAY_SIZE 5

int main()
{
    struct dog dogs[] =
    {
        {"olly", 4.5},
        {"mazy", 5.6},
        {"chipper", 2.1},
        {"buddy", 3.2},
        {"rex", 7.8}
    };

    printf("The dogs before sorting:\n");
    printDogs(dogs, ARRAY_SIZE);
    printf("The dogs sorted by names:\n");
    dogNameSort(dogs, ARRAY_SIZE);
    printDogs(dogs, ARRAY_SIZE);
    printf("The dogs sorted by size:\n");
    dogSizeSort(dogs, ARRAY_SIZE);
    printDogs(dogs, ARRAY_SIZE);
    
    return 0;
}

